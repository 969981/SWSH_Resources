/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d0b20; name: FUN_010d0b20
 */


void FUN_010d0b20(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long local_38;
  
  lVar4 = *(long *)(param_2 + 0x100);
  if (((lVar4 == 0) || (*(char *)(lVar4 + 0x60) == '\0')) ||
     (FUN_011f7650(&local_38,lVar4 + 0x68), local_38 == 0)) {
    *param_1 = 0;
    return;
  }
  plVar5 = *(long **)(param_2 + 8);
  lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar5;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
  lVar1 = (**(code **)(*plVar5 + 0x10))(plVar5,400,0x10);
  if (lVar1 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN_009fe380(lVar1,plVar5);
  *(long **)(lVar1 + 8) = plVar5;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 400;
  *(undefined8 *)(lVar1 + 0x20) = 0x10;
  *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
  if (lVar1 == 0) {
    uVar2 = FUN_011f7040(local_38);
    FUN_009fe680(0,uVar2);
    *param_1 = 0;
    return;
  }
  plVar5 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar2 = FUN_011f7040(local_38);
  FUN_009fe680(lVar1,uVar2);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  uVar3 = FUN_009fec70(lVar1);
  if ((uVar3 & 1) == 0) {
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  else {
    uVar3 = FUN_009fecc0(lVar1);
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))(plVar5);
    if ((uVar3 & 1) != 0) {
      *param_1 = lVar1;
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(plVar5);
      goto LAB_010d0cb8;
    }
  }
  *param_1 = 0;
LAB_010d0cb8:
  (**(code **)(*plVar5 + 0x18))(plVar5);
  return;
}


