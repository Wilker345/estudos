public class Tipo1{
	int x = 2;
	int y = 3;
	{
		Tipo2 = new Tipo1();
		Tipo1.Tipo2.x++;
		Tipo1.Tipo2.y++;
		System.out.println(Tipo1.Tipo2.x);
		System.out.println(Tipo1.Tipo2.y);
	}
}