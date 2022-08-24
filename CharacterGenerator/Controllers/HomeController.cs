using CharacterGenerator.Models;
using Microsoft.AspNetCore.Mvc;
using System.Diagnostics;

namespace CharacterGenerator.Controllers
{
    public class HomeController : Controller
    {
        private readonly ILogger<HomeController> _logger;

        public HomeController(ILogger<HomeController> logger)
        {
            _logger = logger;
        }

        public int[] statRoller()
        {
            var myStats = new int[6];
            for (int i = 0; i < 6; i++)
            {
                myStats[i] = Engine.statRoller();
            }
            return myStats;
        }

        public IActionResult Index()
        {
            return View();
        }

        public IActionResult Results()
        {
            return View();
        }

        public IActionResult Privacy()
        {
            return View();
        }

        [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
        public IActionResult Error()
        {
            return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
        }
    }
}