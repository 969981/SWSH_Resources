/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004691c0; name: FUN_004691c0
 */


void FUN_004691c0(uint *param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_02712e28;
  lVar2 = *(long *)(param_1 + 2);
  if (lVar2 != 0) {
    uVar3 = (ulong)*param_1;
    if (*param_1 != 0) {
      lVar4 = 8;
      uVar5 = 1;
      lVar2 = *(long *)(lVar2 + 8);
      while( true ) {
        if (lVar2 != 0) {
          FUN_00404870(*(undefined4 *)puVar1);
          *(undefined8 *)(*(long *)(param_1 + 2) + lVar4) = 0;
          uVar3 = (ulong)*param_1;
        }
        if (uVar3 <= uVar5) break;
        lVar4 = lVar4 + 0x10;
        uVar5 = uVar5 + 1;
        lVar2 = *(long *)(*(long *)(param_1 + 2) + lVar4);
      }
      lVar2 = *(long *)(param_1 + 2);
    }
    FUN_00404870(*(undefined4 *)PTR_DAT_02712e28,lVar2);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = 0;
  return;
}


