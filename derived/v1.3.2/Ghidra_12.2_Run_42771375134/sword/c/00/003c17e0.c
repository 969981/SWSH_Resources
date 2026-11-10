/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c17e0; name: FUN_003c17e0
 */


void FUN_003c17e0(long param_1)

{
  *(undefined8 *)(param_1 + 0x220) = 0x4000000000;
  *(undefined1 *)(param_1 + 0x210) = 1;
  *(undefined8 *)(param_1 + 0x228) = 0x20;
  *(long *)(param_1 + 0x218) = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x230) = 0xc00;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x260) = 0;
  *(undefined8 *)(param_1 + 0x268) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x270) = 0;
                    /* try { // try from 003c1848 to 003c1853 has its CatchHandler @ 003c18ec */
  FUN_003c3220(param_1 + 0x240,0x40);
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0xffffffff3f400000;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
                    /* try { // try from 003c1874 to 003c187b has its CatchHandler @ 003c188c */
  FUN_003c33b0(param_1 + 0x278,0x40);
  return;
}


