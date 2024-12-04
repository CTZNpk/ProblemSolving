import heapq


def simulate_battle(queries):
    # Max-heaps for heroes and artifacts (invert values to use min-heap as max-heap)
    heroes = []
    artifacts = []
    results = []

    for t, v in queries:
        if t == 1:
            # Add hero with health v
            heapq.heappush(heroes, -v)
        elif t == 2:
            # Add artifact with durability v
            heapq.heappush(artifacts, -v)

        # Simulate the battle
        alive_heroes = [-h for h in heroes]
        active_artifacts = [-a for a in artifacts]
        alive_heroes.sort(reverse=True)
        active_artifacts.sort(reverse=True)

        rounds = 0
        while alive_heroes or active_artifacts:
            a = len(alive_heroes)
            b = len(active_artifacts)
            if a + b == 0:
                break

            # Calculate damage (rounded to two decimals)
            damage = round(1 / (a + b), 2)

            # Apply damage to heroes
            new_heroes = []
            for health in alive_heroes:
                health = round(health - damage, 2)
                if health > 0:  # Only keep heroes with health > 0
                    new_heroes.append(health)

            # Apply damage to artifacts
            new_artifacts = []
            for durability in active_artifacts:
                durability = round(durability - damage, 2)
                if durability > 0:  # Only keep artifacts with durability > 0
                    new_artifacts.append(durability)

            # Update alive heroes and active artifacts
            alive_heroes = new_heroes
            active_artifacts = new_artifacts

            # If no heroes or artifacts remain, terminate
            if not alive_heroes and not active_artifacts:
                break

            # Count rounds
            rounds += 1

        results.append(rounds)

    return results


# Example usage
queries = [
    (2, 5),  # Add artifact with durability 5
    (1, 4),  # Add hero with health 4
    (1, 10)  # Add hero with health 10
]
print(simulate_battle(queries))

