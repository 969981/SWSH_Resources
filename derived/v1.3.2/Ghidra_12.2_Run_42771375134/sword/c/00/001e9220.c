/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e9220; name: FUN_001e9220
 */


void FUN_001e9220(long *param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = param_1[0x16];
  *param_1 = (long)(PTR_DAT_02711128 + 0x10);
  piVar3 = (int *)(lVar2 + 0x18);
  if (*piVar3 == 1) {
    param_1[0xd] = 0;
  }
                    /* try { // try from 001e9254 to 001e926f has its CatchHandler @ 001e92b4 */
  iVar1 = FUN_003ff490(piVar3);
  if (iVar1 == 0) {
    (**(code **)(*(long *)(lVar2 + 0x10) + 0x10))();
  }
  FUN_001edb60(param_1 + 5);
  *param_1 = (long)(PTR_DAT_02711138 + 0x10);
                    /* try { // try from 001e9288 to 001e928f has its CatchHandler @ 001e92a0 */
  FUN_001e1ec0(param_1);
  FUN_001e0d60(param_1 + 3);
  return;
}


