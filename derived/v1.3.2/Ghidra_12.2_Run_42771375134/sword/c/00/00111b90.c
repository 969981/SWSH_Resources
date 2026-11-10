/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00111b90; name: FUN_00111b90
 */


undefined8 FUN_00111b90(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  FUN_003ff570(*param_1);
  lVar3 = param_1[1];
  puVar5 = param_1 + 3;
  uVar4 = *puVar5;
  iVar2 = *(int *)(lVar3 + (ulong)(*(int *)(param_1 + 2) - 1) * 8) - (int)uVar4;
  *param_2 = iVar2;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 2);
    if (uVar1 < (*(uint *)((long)param_1 + 0x14) & 0x7fffffff)) {
      *(undefined8 *)(lVar3 + (ulong)uVar1 * 8) = uVar4;
      *(uint *)(param_1 + 2) = uVar1 + 1;
    }
    else {
                    /* try { // try from 00111c04 to 00111c0b has its CatchHandler @ 00111c2c */
      FUN_00112510(param_1 + 1,puVar5);
    }
    uVar4 = *puVar5;
  }
                    /* try { // try from 00111c14 to 00111c17 has its CatchHandler @ 00111c44 */
  FUN_003ff5a0(*param_1);
  return uVar4;
}


