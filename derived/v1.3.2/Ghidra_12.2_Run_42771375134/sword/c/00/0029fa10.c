/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029fa10; name: FUN_0029fa10
 */


void FUN_0029fa10(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  
  FUN_0029fec0();
  puVar1 = PTR_DAT_02711f88 + 0xd0;
  plVar2 = param_1 + 0x14;
  *param_1 = (long)(PTR_DAT_02711f88 + 0x10);
  param_1[2] = (long)puVar1;
                    /* try { // try from 0029fa48 to 0029fa4f has its CatchHandler @ 0029fa90 */
  FUN_0029f550(plVar2);
  param_1 = param_1 + 0x1a;
                    /* try { // try from 0029fa54 to 0029fa5b has its CatchHandler @ 0029fa88 */
  FUN_0029f600(param_1);
                    /* try { // try from 0029fa60 to 0029fa73 has its CatchHandler @ 0029faa4 */
  FUN_0029f5b0(plVar2,param_3 + 0x88);
  FUN_0029f670(param_1,param_3 + 0xb8);
  *param_1 = (long)plVar2;
  return;
}


