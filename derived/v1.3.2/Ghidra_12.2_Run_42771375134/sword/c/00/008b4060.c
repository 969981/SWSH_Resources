/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b4060; name: FUN_008b4060
 */


void FUN_008b4060(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  long local_50 [3];
  long local_38;
  
  uVar3 = FUN_010386c0(*(undefined8 *)(param_1 + 0xb0));
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x80) != '\0') {
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00897d00();
    for (; plVar4 != (long *)lVar5; plVar4 = (long *)*plVar4) {
    }
    lVar5 = puVar8[0xb];
    (**(code **)(**(long **)(lVar5 + 0x10) + 0x50))
              (*(long **)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x1c));
    iVar2 = FUN_008783b0();
    puVar1 = &DAT_026175c0;
    if (iVar2 != 0x1e7) {
      puVar1 = (undefined4 *)0x0;
    }
    *(undefined4 **)(param_1 + 0x88) = puVar1;
    if (iVar2 == 0x1e7) {
      FUN_008a6a20(local_50,puVar8 + -10,*puVar1);
      if (*(long *)(param_1 + 0x90) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      *(long *)(param_1 + 0x90) = local_50[0];
      if (local_50[0] != 0) {
        uVar6 = FUN_008c8c30(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(lVar5 + 0x1c));
        FUN_016a66b0(local_50[0],uVar6);
      }
      FUN_006cf0a0(local_50,*(long *)(param_1 + 0x88) + 8);
      FUN_016d3620(local_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      uVar7 = 3;
      *(undefined4 *)(param_1 + 0x98) = 0;
      goto LAB_008b4180;
    }
  }
  uVar7 = 6;
LAB_008b4180:
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  return;
}


