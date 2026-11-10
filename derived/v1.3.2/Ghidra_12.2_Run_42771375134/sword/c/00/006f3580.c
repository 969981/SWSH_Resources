/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f3580; name: FUN_006f3580
 */


/* WARNING: Removing unreachable block (ram,0x006f3694) */

void FUN_006f3580(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar2 = *(long *)(param_1 + 0xe8);
  puVar4 = *(undefined8 **)(param_1 + 0xf0);
  uVar3 = (ulong)*(int *)(param_1 + 0x160);
  if ((ulong)((long)puVar4 - lVar2 >> 5) <= uVar3) {
    if (puVar4 < *(undefined8 **)(param_1 + 0xf8)) {
      uVar6 = *(undefined8 *)(param_1 + 0x100);
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0xffffffffffffffff;
      puVar4[3] = 0;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      lVar2 = *(long *)(param_1 + 0xf0) + 0x20;
      *(long *)(param_1 + 0xf0) = lVar2;
    }
    else {
      FUN_006f38c0();
      lVar2 = *(long *)(param_1 + 0xf0);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x150);
    iVar1 = *(int *)(param_1 + 0x158);
    uVar6 = FUN_0199c8b0(PTR_DAT_027155e8);
    FUN_006f1b70(&local_50,uVar5,0,(long)iVar1,uVar6);
    *(undefined8 *)(lVar2 + -0x20) = local_50;
    if (*(long *)(lVar2 + -0x18) != 0) {
      (**(code **)(*(long *)(*(long *)(lVar2 + -0x18) + 0x48) + 0x18))();
      *(undefined8 *)(lVar2 + -0x18) = 0;
    }
    *(long *)(lVar2 + -0x18) = local_48;
    *(undefined8 *)(lVar2 + -0x10) = local_40;
    *(undefined8 *)(lVar2 + -8) = local_38;
    local_48 = 0;
    local_50 = 0;
    local_40 = 0xffffffffffffffff;
    local_38 = 0;
    FUN_006f6820(&local_50);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    uVar3 = (ulong)*(int *)(param_1 + 0x160);
    lVar2 = *(long *)(param_1 + 0xe8);
  }
  uVar6 = FUN_006f6880(lVar2 + uVar3 * 0x20);
  FUN_0199caf0(param_1,uVar6,
               *(undefined8 *)
                (*(long *)(param_1 + 0xe8) + (long)*(int *)(param_1 + 0x160) * 0x20 + 0x10),
               (long)*(int *)(param_1 + 0x158));
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
  return;
}


