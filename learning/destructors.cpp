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
    e.takeDamage(10);

}