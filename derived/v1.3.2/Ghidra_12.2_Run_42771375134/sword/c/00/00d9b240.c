/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d9b240; name: FUN_00d9b240
 */


bool FUN_00d9b240(long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined1 uVar5;
  
  if (*(int *)(param_1 + 0x398) < *(int *)(param_1 + 0x39c)) {
    iVar1 = *(int *)(param_1 + 0x398) + 1;
    iVar4 = *(int *)(param_1 + 0x364);
    *(int *)(param_1 + 0x398) = iVar1;
    *(ulong *)(param_1 + 0x3b8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3b8) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x3c8) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x3b8) + (float)*(undefined8 *)(param_1 + 0x3c8))
    ;
    *(ulong *)(param_1 + 0x3b0) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x3b0) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x3c0) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x3b0) + (float)*(undefined8 *)(param_1 + 0x3c0))
    ;
    if (*(int *)(param_1 + 0x39c) <= iVar1 && iVar4 == 2) {
      FUN_00d9be00(param_1,*(undefined4 *)(param_1 + 0x360));
      iVar4 = *(int *)(param_1 + 0x364);
    }
    bVar2 = true;
    uVar5 = (undefined1)(int)*(float *)(param_1 + 0x3bc);
  }
  else {
    *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x3d8);
    *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x3d0);
    iVar4 = *(int *)(param_1 + 0x364);
    bVar2 = iVar4 != 3;
    *(undefined8 *)(param_1 + 0x398) = 0;
    uVar5 = (undefined1)(int)*(float *)(param_1 + 0x3bc);
  }
  if (iVar4 == 3) {
    lVar3 = *(long *)(param_1 + 0x380);
  }
  else {
    if (iVar4 != 2) {
      return bVar2;
    }
    lVar3 = *(long *)(param_1 + 0x370);
  }
  if ((lVar3 != 0) && (lVar3 = FUN_00786910(*(undefined8 *)(param_1 + 0x358)), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x59) = uVar5;
  }
  return bVar2;
}


