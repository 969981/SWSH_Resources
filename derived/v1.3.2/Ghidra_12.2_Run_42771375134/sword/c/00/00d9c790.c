/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9c790; name: FUN_00d9c790
 */


bool FUN_00d9c790(long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined1 uVar5;
  
  if (*(int *)(param_1 + 0x2e8) < *(int *)(param_1 + 0x2ec)) {
    iVar1 = *(int *)(param_1 + 0x2e8) + 1;
    iVar4 = *(int *)(param_1 + 0x2b4);
    *(int *)(param_1 + 0x2e8) = iVar1;
    *(ulong *)(param_1 + 0x2f8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2f8) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x308) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x2f8) + (float)*(undefined8 *)(param_1 + 0x308))
    ;
    *(ulong *)(param_1 + 0x2f0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2f0) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x300) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x2f0) + (float)*(undefined8 *)(param_1 + 0x300))
    ;
    if (*(int *)(param_1 + 0x2ec) <= iVar1 && iVar4 == 2) {
      FUN_00d9cfd0(param_1,*(undefined4 *)(param_1 + 0x2b0));
      iVar4 = *(int *)(param_1 + 0x2b4);
    }
    bVar2 = true;
    uVar5 = (undefined1)(int)*(float *)(param_1 + 0x2fc);
  }
  else {
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x318);
    *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x310);
    iVar4 = *(int *)(param_1 + 0x2b4);
    bVar2 = iVar4 != 3;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    uVar5 = (undefined1)(int)*(float *)(param_1 + 0x2fc);
  }
  if (iVar4 == 3) {
    lVar3 = *(long *)(param_1 + 0x2d0);
  }
  else {
    if (iVar4 != 2) {
      return bVar2;
    }
    lVar3 = *(long *)(param_1 + 0x2c0);
  }
  if ((lVar3 != 0) && (lVar3 = FUN_00786910(*(undefined8 *)(param_1 + 0x2a8)), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x59) = uVar5;
  }
  return bVar2;
}


