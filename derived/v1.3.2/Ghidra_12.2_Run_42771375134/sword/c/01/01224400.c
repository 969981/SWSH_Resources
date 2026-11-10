/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01224400; name: FUN_01224400
 */


void FUN_01224400(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  char local_410 [8];
  long local_408 [47];
  char local_290 [16];
  undefined1 auStack_280 [608];
  
  if (((*(long *)PTR_DAT_0271cba8 == 0) || (uVar1 = FUN_011f69d0(), (uVar1 & 1) == 0)) ||
     (uVar1 = *(long *)(param_1 + 0x1b0) + 1, *(ulong *)(param_1 + 0x1b0) = uVar1,
     uVar1 < *(ulong *)(param_1 + 0x1b8))) {
    return;
  }
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  uVar4 = *(ulong *)(param_1 + 0x1c0);
  iVar3 = (int)uVar4;
  uVar1 = (ulong)(iVar3 + 1) & 7;
  if (((((*(long *)(param_1 + uVar1 * 0x30 + 0x30) != 0) ||
        (uVar1 = (ulong)(iVar3 + 2) & 7, *(long *)(param_1 + uVar1 * 0x30 + 0x30) != 0)) ||
       ((uVar1 = (ulong)(iVar3 + 3) & 7, *(long *)(param_1 + uVar1 * 0x30 + 0x30) != 0 ||
        ((uVar1 = (ulong)(iVar3 + 4) & 7, *(long *)(param_1 + uVar1 * 0x30 + 0x30) != 0 ||
         (uVar1 = (ulong)(iVar3 + 5) & 7, *(long *)(param_1 + uVar1 * 0x30 + 0x30) != 0)))))) ||
      (uVar1 = (ulong)(iVar3 + 6) & 7, *(long *)(param_1 + uVar1 * 0x30 + 0x30) != 0)) ||
     ((uVar1 = (ulong)(iVar3 - 1) & 7, *(long *)(param_1 + uVar1 * 0x30 + 0x30) != 0 ||
      (uVar1 = uVar4 & 7, *(long *)(param_1 + (uVar4 & 7) * 0x30 + 0x30) != 0)))) {
    uVar4 = uVar1;
    *(ulong *)(param_1 + 0x1c0) = uVar4;
  }
  FUN_01224af0(local_290,param_1,*(undefined8 *)(param_1 + uVar4 * 0x30 + 0x30));
  if (((local_290[0] != '\0') && (FUN_011f8900(local_410,auStack_280,1), local_410[0] != '\0')) &&
     (lVar5 = *(long *)PTR_DAT_027185f8, lVar5 != 0)) {
    uVar2 = (**(code **)(local_408[0] + 0x10))(local_408);
    FUN_0120e590(lVar5,uVar2,0x163);
  }
  return;
}


