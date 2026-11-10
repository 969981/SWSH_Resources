/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001b15e0; name: FUN_001b15e0
 */


void FUN_001b15e0(long param_1,undefined8 param_2)

{
  FUN_001b16a0(param_1,0,"Pt::Batcher::shapeGen");
                    /* try { // try from 001b160c to 001b161f has its CatchHandler @ 001b168c */
  FUN_001b16a0(param_1 + 0xa8,0,"Pt::Batcher::dynamicsCpu");
                    /* try { // try from 001b1624 to 001b1637 has its CatchHandler @ 001b1670 */
  FUN_001b16a0(param_1 + 0x150,0,"Pt::Batcher::collPrep");
                    /* try { // try from 001b163c to 001b164b has its CatchHandler @ 001b1660 */
  FUN_001b16a0(param_1 + 0x1f8,0,"Pt::Batcher::collisionCpu");
  *(undefined8 *)(param_1 + 0x2a0) = param_2;
  return;
}


