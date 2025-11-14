#include "DisplayManager.hpp"
#include <iostream>

DisplayManager::DisplayManager() {
    setStartingScene();
    setCustomerOne();
    setCustomerTwo();
    setCustomerThree();
    setCustomerFour();
    setCustomerFive();
    setCustomerSix();
    setGuessingScene();
    setVictoryScene();
    setLosingScene();
}

void DisplayManager::setStartingScene() {
    m_szStartingScene = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )"
R"(
        ──────────────────────────────────────────────
           SKYBORNE EXPRESS – DOCK 7, MIDNIGHT SHIFT
        ──────────────────────────────────────────────

        Engines purr in the dark. Rain taps Morse on the hull. Six bookings tonight. All flagged 
        "priority." None look honest.

        Every slip has a name, an item, a quantity, and a cost. The system only trusts *exact* 
        entries. One wrong letter, one wrong digit, and a lie can hide in plain sight.

        [Radio crackle]

        DISPATCH: "Captain, heads up. HQ got a tip: one manifest's cost is off. Not by much, 
        but enough to blow back on us if it goes wrong."

        DISPATCH: "They like to talk, these six. Listen to what they say about each other, 
        cargo gossip's cheaper than insurance."

        DISPATCH: "And a few of them are fond of riddles now, for some reason. Note those too. 
        Between cost, loose tongues, and riddles, you’ll spot the liar."

        You flip your clipboard open, pen hovering over the first line.

        Tonight, you *know* one shipment is lying. Your job is to find it and remove it before 
        the ramp closes.

        If something goes wrong tonight, your signature’s on it.
)";
}

void DisplayManager::setCustomerOne() {
    m_szCustomerOne = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )"
R"(
        ──────────────────────────────────────────────
           [January 17 – 00:12, Bulk Ryker Arrives]
        ──────────────────────────────────────────────

        The hangar doors hiss open and a wall of muscle stomps through the rain. Tank top, duffel bag, 
        and an expression like the weather offended him.

        "BRO," he grunts. "Just got back from Mexico. Don't ask. DO. NOT. ASK."

        He drags his crate like it insulted his mother and lets it slam onto the deck.

        Bulk Ryker: "Protein Infusion Canisters. Four units. Cost: two hundred. I could curl this crate as a
        warmup. You? Probably not."

        The number catches your ear. You’ve seen similar canisters. They never come that cheap.

        Bulk Ryker: "Ask that programmer kid if you want numbers, bro. I only count reps."

        He jerks a thumb toward the conspiracy theorist, who’s already scribbling in a notebook.

        Bulk Ryker: "And that UFO guy? Vesper? Bro’s got eyes like he hasn’t slept in a week. 
        Bet his crate’s full of tinfoil and bad decisions."

        You log: 
        Name: Bulk Ryker |
        Item: Protein Infusion Canisters |
        Qty: 4 |
        Cost: 200 |
)";
}

void DisplayManager::setCustomerTwo() {
    m_szCustomerTwo = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )"
R"(
        ──────────────────────────────────────────────
         [January 17 – 00:47, Buck Hawthorne Arrives]
        ──────────────────────────────────────────────

        He waddles in under a rain-slick jacket that does not quite close over his belly, 
        clutching a brown bottle of dock beer.

        Buck: "Back when I was young, crates were honest. Beer was cheaper. Knees didn't hurt. Anyway here's mine."

        He eases the crate down with a wheezy grunt.

        Buck: "Classic Ale Keg. One unit. Cost: ninety. Standard issue. Back when I was young, that would've 
        been thirty. But hey, inflation."

        The number sounds right. Nothing unusual there.

        He jerks his chin toward the programmer’s lane.

        Buck: "Back when I was young, programmers didn’t need little javascript frameworks and AI tools, 
        they wrote everything in assembly. His crate is as suspicious as his resume. 

        Buck leans closer, voice dropping to a tipsy hush.

        Buck: "Here’s a little brain teaser for you, Captain:

            'What has numbers but no weight, 
             letters but no sound?'

        Back when I was young, we used that to haze the rookies."

        You log: 
        Name: Buck Hawthorne |
        Item: Classic Ale Keg |
        Qty: 1 |
        Cost: 90 |
)";
}

void DisplayManager::setCustomerThree() {
    m_szCustomerThree = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )"
R"(
        ──────────────────────────────────────────────
         [January 17 – 01:03, Old Man Ripple Arrives]
        ──────────────────────────────────────────────

        He drifts out of the mist like he was poured from it. Coat salt-stained, eyes cloudy, steps slow and sure.
        Ripple: "Evening, Captain. Sea spat me back out with a job to finish."

        He pats the crate once, almost fondly, before resting it on the deck.

        Ripple: "Net-Stabilizer Kit. Two units. Cost: one hundred twenty."

        You’ve seen the same kits listed closer to one-eighty. His price feels… light.

        He listens to the rain for a long moment, then tilts his head toward Bulk, who’s still pacing.

        Ripple: "That one walks like a storm trapped in a bottle. Strong back, loud crate, but the numbers on 
        his slip feel lighter than his temper."

        Then, softer, like a tide going out:

        Ripple: 
            "When two shadows stand, only one is true.  
             The liar’s breath chills the page they touch."

        You log: 
        Name: Old Man Ripple |
        Item: Net-Stabilizer Kit |
        Qty: 2 |
        Cost: 120 |
)";
}

void DisplayManager::setCustomerFour() {
    m_szCustomerFour = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )"
R"(
        ──────────────────────────────────────────────
          [January 17 – 01:14, Bramble Nett Arrives]
        ──────────────────────────────────────────────

        He moves like he is not entirely convinced the floor is real. Damp hair, half-smile, eyes fixed 
        on the ceiling lights as if checking their pulse.

        Bramble: "Mmm. Your dock hums tonight, Captain. Good soil. Good echoes."

        He lowers the crate with surprising care, like setting down a sleeping animal.

        Bramble: "Cultivation Spore Beds. Three units. Cost: one hundred fifty. Fair trade. The fungi approve."

        The number matches what you’ve seen before. Standard rate.

        He squints toward Buck’s keg, nose twitching.

        Bramble: "The ale man’s crate? Feels… grounded. Heavy in the right way. His slip smells honest. 
        Old roots, not fresh lies."

        He looks past you, through you, then somewhere else.

        Bramble: 
            "The quietest growth makes the loudest bloom 
             when no one’s watching."

        You log: 
        Name: Bramble Nett |
        Item: Cultivation Spore Beds |
        Qty: 3 |
        Cost: 150 |
)";
}

void DisplayManager::setCustomerFive() {
    m_szCustomerFive = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )"
R"(
        ──────────────────────────────────────────────
          [January 17 – 01:26, Vesper Morrow Arrives]
        ──────────────────────────────────────────────

        He barrels in mid-sentence, rain plastering his hair to his head, notebook clutched to his chest.

        Vesper: "—AND THAT’S WHEN THE TRIANGLE LIGHT TURNED AND LOOKED RIGHT AT ME, CAPTAIN. 
        Classic pre-abduction maneuver."

        He sets the crate down like it might bite.

        Vesper: "EM Field Sensor. One unit. Cost: one hundred ten. Got a discount from a guy who was 
        absolutely beamed up last winter. You can tell in his eyes."

        You know EM sensors run more than twice that. The number itches at the back of your mind.

        He glances at Bramble’s crate, eyes narrowing, then relaxing.

        Vesper: "That mushroom guy? Bramble? Weird, sure, but his box hums low and steady. 
        That’s honest hardware. The kind aliens ignore."

        You log: 
        Name: Vesper Morrow |
        Item: EM Field Sensor |
        Qty: 1 |
        Cost: 110 |
)";
}

void DisplayManager::setCustomerSix() {
    m_szCustomerSix = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

    )"
R"(
        ──────────────────────────────────────────────
          [January 17 – 01:39, Linton Yarrow Arrives]
        ──────────────────────────────────────────────

        He arrives mid-mutter, fingers twitching like he is typing on an invisible keyboard.

        Linton: "Okay, cool, emotional state: damp but functional. Crate status: ready for deployment."

        He adjusts the box with unnecessary fuss, then reads from his slip.

        Linton: "Soft-Code Debugging Array. One unit. Cost: three hundred twenty."

        You have seen arrays like that listed near nine hundred, even on the cheap end, his number low.

        He forces a laugh that does not quite land.

        Linton nods toward Ripple, who’s listening to the rain.

        Linton: "Old sailor over there? Talks like a fortune cookie. Guy underprices his own gear and 
        then mutters about shadows. If anyone’s ship is haunted, it’s his."

        He leans in, voice dropping.

        Linton: 
            "Here’s one for you, Captain:

            “A tool that finds mistakes cannot afford one of its own.”

        You log: 
        Name: Linton Yarrow |
        Item: Soft-Code Debugging Array |
        Qty: 1 |
        Cost: 320 |
)";
}

void DisplayManager::setGuessingScene()
{
    m_szGuessingScene = R"(                 
                 .                             .
                //                             \\
               //                               \\
              //                                 \\
             //                _._                \\
          .---.              .//|\\.              .---.
________ / .-. \_________..-~ _.-._ ~-..________ / .-. \_________
         \ ~-~ /   /H-     `-=.___.=-'     -H\   \ ~-~ /    
           ~~~    / H          [H]          H \    ~~~      0
                 / _H_         _H_         _H_ \           /\#
                   UUU         UUU         UUU             /\

)"
R"(
        ──────────────────────────────────────────────
            [January 17 – 01:52, The Manifest Test]
        ──────────────────────────────────────────────

        The rain slackens. The hangar lights buzz. You plant the six slips on the crate and listen.

        The mail pouch at your hip thrums—soft, then sharp— like a tuning fork near a lie.

        One shipment’s description isn’t honest.

        Some costs rang low. Some tongues pointed fingers. Some riddles curled around something nastier 
        than wordplay.

        You scan the names, the items, the quantities, the costs. Somewhere in the ink, one bad entry 
        waits to take the fall.

        Review the entries and choose the suspect:
)";
}

void DisplayManager::setVictoryScene() {
    m_szVictoryScene = R"(                 
                  _
                 -=\`\
             |\ ____\_\__
           -=\ `""""""" "`)
              `----/ /~~`
                -==/ /
                  '-'

                  _  _
                 ( `   )_
                (    )    `)
              (_   (_ .  _) _)
                                             _
                                            (  )
             _ .                         ( `  ) . )
           (  _ )_                      (_, _(  ,_)_)
         (_  _(_ ,)
)"
R"(
        ──────────────────────────────────────────────
             [January 17 – 02:07, Manifest Verified]
        ──────────────────────────────────────────────

        The pouch on your hip gives one clean, steady hum a truth-note.

        You flip the final slip over, scribble your signature, and the hangar exhales with you.

        DISPATCH (radio): "Captain, HQ confirms it. Good call. That could’ve cost the entire dock."

        A soft clunk echoes as the loading clamps lock. Engines spool, hungry to leave.

        Bulk finally stops pacing. 
        Buck raises his bottle in a tired salute. 
        Ripple closes his eyes and listens to a storm that never arrives. 
        Bramble finaly stops staring at the wall.
        Vesper scans the sky for triangles and, for once, finds none. 
        Linton’s crate sits untouched, danger filed under 'averted.'

        Tonight, nothing blows up, phases out, lies, or sings.

        You earned your lift-off.

        ✔ Manifest cleared  
        ✔ Shipment secured  
        ✔ Captain intact  

        Victory feels like a hangar finally going still.
)";
}

void DisplayManager::setLosingScene() {
    m_szLosingScene = R"(                            * #** 
                 .          **              .__      * ###*
                //        **##**             \|_       *#*
               //          *#* *               \\     **
              //           **                    \\   *#
             //             ** _._                \\ **
          .---.              ./  |\\.             .---.             <O
         / .-. \___    __..-~ _.-._ ~-..________ / .-. \_________    |\
         \ ~-~ /   \        `-=.___.=-'          \ ~-~ /             /\
_____/              
)"
R"(
        ──────────────────────────────────────────────
             [January 17 – 02:07, Manifest Failure]
        ──────────────────────────────────────────────

        The pouch on your hip screeches—short, sharp, unmistakably wrong.

        Before you can flip the slip back over, the crate beside you *ticks* out of rhythm.

        Someone shouts. Something hums. Everything goes sideways.

        A flash of light bleeds through the metal like fog through fingers. 
        The air screams and the hangar lights pop, one by one.

        DISPATCH (radio, panicked): "Captain—Captain?!  
        You cleared the wrong manifest. Back away—"

        But it’s too late.

        The shipment you passed wasn’t honest. 
        And tonight, honesty was the only shield you had.

        ✖ Manifest falsified  
        ✖ HQ breach reported  
        ✖ Plane compromised  

        The hangar falls silent, except for the rain
        tapping your mistake into the floor.
)";
}
