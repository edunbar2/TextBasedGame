class Enemy
{
public:
    int hp;
    float x, y;
    Enemy()
    {

    }

    Enemy(float x, float y)
    {
        x = x;
        y = y;
        hp = 100;
    }

    ~Enemy()
    {

    }

    void takeDamage(int damage)
    {
        hp -= damage;
    }

};

int main()
{
    Enemy e;
    Enemy* testEnemy = new Enemy();
    Enemy e = *testEnemy;
    testEnemy->takeDamage(5);
    e.takeDamage(6);
    e.takeDamage(10);

}