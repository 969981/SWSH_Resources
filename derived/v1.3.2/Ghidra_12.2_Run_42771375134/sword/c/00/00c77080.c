/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c77080; name: FUN_00c77080
 */


void FUN_00c77080(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  uVar1 = FUN_00c774c0(param_3);
  if ((uVar1 & 1) == 0) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x20);
  if (*plVar6 == 0) {
    lVar7 = 0;
  }
  else {
    plVar6 = (long *)(param_1 + 0x40);
    if (*plVar6 == 0) {
      lVar7 = 1;
    }
    else {
      plVar6 = (long *)(param_1 + 0x60);
      if (*plVar6 != 0) {
        return;
      }
      lVar7 = 2;
    }
  }
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x1c0,8);
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = param_2;
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
  FUN_00c774f0(lVar2,param_2,*(undefined8 *)(param_1 + 8),param_3);
  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
  puVar4 = (undefined8 *)*plVar6;
  *plVar6 = lVar2;
  if (puVar4 == (undefined8 *)0x0) {
    lVar7 = param_1 + lVar7 * 0x20;
    puVar5 = (undefined8 *)(lVar7 + 0x28);
    puVar8 = (undefined8 *)(lVar7 + 0x30);
    puVar9 = (undefined8 *)(lVar7 + 0x38);
  }
  else {
    (**(code **)*puVar4)(puVar4);
    lVar7 = param_1 + lVar7 * 0x20;
    puVar5 = (undefined8 *)(lVar7 + 0x28);
    puVar8 = (undefined8 *)(lVar7 + 0x30);
    puVar9 = (undefined8 *)(lVar7 + 0x38);
    (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,puVar4,*puVar8,*puVar9);
    lVar2 = *plVar6;
  }
  *puVar5 = param_2;
  *puVar8 = 0x1c0;
  *puVar9 = 8;
  FUN_00c77f60(lVar2,*(undefined1 *)(param_1 + 0x18));
  return;
}


