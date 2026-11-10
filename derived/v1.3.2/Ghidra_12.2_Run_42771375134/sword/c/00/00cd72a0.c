/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cd72a0; name: FUN_00cd72a0
 */


void FUN_00cd72a0(undefined8 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    lVar6 = *(long *)PTR_DAT_02710798;
    lVar5 = *(long *)(lVar6 + 0x1e8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(lVar6 + 0x1b8);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    FUN_0077d660(*param_1);
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    *(undefined2 *)(param_1 + 2) = 0;
    param_1[1] = 0;
    FUN_01524b90(lVar5,*param_1);
    uVar1 = FUN_01524bf0(lVar5);
    *(undefined1 *)((long)param_1 + 0xc) = uVar1;
    uVar1 = FUN_01524c00(lVar5);
    *(undefined1 *)((long)param_1 + 0xd) = uVar1;
    uVar3 = FUN_01524de0(lVar5);
    *(undefined4 *)(param_1 + 1) = uVar3;
    bVar2 = FUN_01510f00(lVar6,0x29e651f9b99a1e28);
    *(byte *)((long)param_1 + 0xf) = bVar2 & 1;
    bVar2 = FUN_01510f00(lVar6,0x6d546465931c9879);
    *(byte *)(param_1 + 2) = bVar2 & 1;
    bVar2 = FUN_01510f00(lVar6,0x8d69486d6c143d25);
    *(byte *)((long)param_1 + 0x11) = bVar2 & 1;
    uVar4 = FUN_01524bc0(lVar5);
    *(uint *)((long)param_1 + 0x14) = uVar4 & 0xff;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00cd73d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
      return;
    }
  }
  return;
}


