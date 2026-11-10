/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011fa930; name: FUN_011fa930
 */


void FUN_011fa930(long param_1,long param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int local_98 [18];
  
  FUN_011fa600(local_98);
  FUN_011fa660(local_98,param_2);
  if (*(char *)(param_1 + 0x16a) != '\0') {
    *(undefined1 *)(param_1 + 0x16c) = 1;
    local_98[0] = 4;
  }
  if ((*(char *)(param_1 + 0x169) != '\0') && (local_98[0] == 2)) {
    return;
  }
  uVar2 = FUN_011fb8d0(param_2 + 0xc);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (local_98[0] <= *(int *)(param_1 + 0x58))) {
    return;
  }
  FUN_011fa660((int *)(param_1 + 0x58),local_98);
  if (((*(int *)(param_1 + 0x58) != 0) &&
      (*(undefined4 *)(param_1 + 0x50) = 1, *(long *)(param_1 + 0x128) != 0)) &&
     (uVar2 = FUN_0101b5e0(*(undefined8 *)PTR_DAT_02710848), (uVar2 & 1) != 0)) {
    lVar1 = *(long *)(param_1 + 0x120);
    lVar5 = *(long *)(param_1 + 0x128) + -1;
    lVar4 = *(long *)(lVar1 + lVar5 * 0x10);
    if (lVar4 != 0) {
      plVar3 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if (*(int *)(lVar4 + 0x54) != 0) {
        (**(code **)**(undefined8 **)(lVar1 + lVar5 * 0x10 + 8))();
        *(undefined4 *)(param_1 + 0x50) = 2;
      }
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  if ((param_3 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x168) == '\x02') {
    if (*(int *)(param_1 + 0x58) < 3) goto LAB_011faa8c;
  }
  else if (*(char *)(param_1 + 0x168) != '\0') {
LAB_011faa8c:
    *(undefined1 *)(param_1 + 0x16d) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x16b) = 1;
  return;
}


