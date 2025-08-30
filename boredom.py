import pygame
import sys


player_size = 25;
p_velx = player_size
p_vely = player_size
WHITE=(255, 255, 255)

pygame.init()

class Game:
    def __init__(self):
        self.WIDTH = 700
        self.HEIGHT = 400
        self.screen = pygame.display.set_mode((self.WIDTH, self.HEIGHT))
        pygame.display.set_caption("PYGAME")
        self.clock = pygame.time.Clock()

    def run(self):
        while True:
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    pygame.quit()
                    sys.exit()

            # game.screen.fill(WHITE)
            # player.draw(game.screen)
            

            pygame.display.flip()
            self.clock.tick(60)


class Player:
    def __init__(self, x, y, size, velx, vely):
        self.x = x
        self.y = y
        self.velx = velx
        self.vely = vely
        self.size = size 
        self.color = (0, 0, 200)

    def move(self):
        key = pygame.key.get_pressed()
        # TODO: key elifs lol
        
        if key[pygame.K_UP]:
            self.y += self.vely

    def draw(self, surface):
        pygame.draw.rect(surface, self.color, (self.x, self.y, self.size, self.size))


# player = Player(game.WIDTH // 2, game.HEIGHT // 2, player_size, p_velx, p_vely)

Game().run()