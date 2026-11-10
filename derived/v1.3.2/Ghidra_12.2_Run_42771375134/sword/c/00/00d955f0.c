/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d955f0; name: FUN_00d955f0
 */


bool FUN_00d955f0(long param_1)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  int iVar4;
  undefined1 uVar5;
  
  if (*(int *)(param_1 + 0x608) < *(int *)(param_1 + 0x60c)) {
    iVar1 = *(int *)(param_1 + 0x608) + 1;
    iVar4 = *(int *)(param_1 + 0x5d4);
    *(int *)(param_1 + 0x608) = iVar1;
    *(ulong *)(param_1 + 0x618) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x618) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x628) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x618) + (float)*(undefined8 *)(param_1 + 0x628))
    ;
    *(ulong *)(param_1 + 0x610) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x610) >> 0x20) +
                  (float)((ulong)*(undefined8 *)(param_1 + 0x620) >> 0x20),
                  (float)*(undefined8 *)(param_1 + 0x610) + (float)*(undefined8 *)(param_1 + 0x620))
    ;
    if (*(int *)(param_1 + 0x60c) <= iVar1 && iVar4 == 2) {
      FUN_00d967d0(param_1,*(undefined4 *)(param_1 + 0x5d0));
      iVar4 = *(int *)(param_1 + 0x5d4);
    }
    bVar2 = true;
    uVar5 = (undefined1)(int)*(float *)(param_1 + 0x61c);
  }
  else {
    *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(param_1 + 0x638);
    *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x630);
    iVar4 = *(int *)(param_1 + 0x5d4);
    bVar2 = iVar4 != 3;
    *(undefined8 *)(param_1 + 0x608) = 0;
    uVar5 = (undefined1)(int)*(float *)(param_1 + 0x61c);
  }
  if (iVar4 == 3) {
    lVar3 = *(long *)(param_1 + 0x5f0);
  }
  else {
    if (iVar4 != 2) {
      return bVar2;
    }
    lVar3 = *(long *)(param_1 + 0x5e0);
  }
  if ((lVar3 != 0) && (lVar3 = FUN_00786910(*(undefined8 *)(param_1 + 0x5c8)), lVar3 != 0)) {
    *(undefined1 *)(lVar3 + 0x59) = uVar5;
  }
  return bVar2;
}


