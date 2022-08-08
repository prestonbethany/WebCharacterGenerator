namespace CharacterGenerator
{
    public class Engine
    {
        [System.Runtime.InteropServices.DllImport("RollerEngine")]
        public static extern int statRoller();

    }
}
