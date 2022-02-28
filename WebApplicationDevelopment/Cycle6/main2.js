$("#submit-button").click(function(event)
{
    let task = $(".input-data").val();
    $("ul#tasksList").append(`<li>${task}<button class = "deleteButton">X</button></li>`)
    $(".input-data").val = "";
    $(".deleteButton").click(function(e)
    {
        $(e.target.parentElement).detach();
    })
    $("li").mouseenter(function()
{
    $(this).css("background","green");
})
    $("li").mouseleave(function()
{
    $(this).css("background","white");
})
    $("li").click(function()
{
    $(this).css("text-decoration","line-through");
})
})

