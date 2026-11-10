/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c33230; name: FUN_00c33230
 */


undefined1  [16] FUN_00c33230(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined *local_78;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar8)(puVar8);
    lVar4 = FUN_00be66c0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar8 = puVar8 + -10;
        goto LAB_00c33288;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_00c33288:
  FUN_00c1cce0(&local_78,puVar8);
  lVar4 = FUN_00be53f0(&local_78);
  if (local_78 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = (undefined *)0x0;
  }
  uVar9 = 0x80000001;
  uVar11 = 0;
  if (lVar4 != 0) {
    lVar10 = *(long *)(lVar4 + 0x70);
    lVar4 = FUN_00ff0930();
    if ((lVar10 == lVar4) || (local_28 = *(long *)(param_1 + 0x98), local_28 == 0)) {
      uVar11 = 0;
    }
    else {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
      uVar9 = FUN_00ff3f60(lVar10,&local_28);
      uVar11 = uVar9 >> 0x20;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if ((int)uVar9 == 0) {
        local_40 = 0;
        uStack_38 = 0;
        local_50 = 0;
        uStack_48 = 0;
        uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0x98));
        uVar2 = FUN_0077d480(*(undefined8 *)(param_1 + 0x98));
        FUN_0077dea0(&local_50,0x20,uVar5,uVar2);
        local_70[0] = 0;
        puVar1 = PTR_DAT_027167e8 + 0x10;
        local_60 = local_70;
        local_58 = 0x10;
        local_78 = puVar1;
        FUN_017d05f0(&local_78,&local_50,0xffffffffffffffff);
        uVar7 = FUN_00be0750(&local_78);
        local_78 = puVar1;
        FUN_017d0720(&local_78);
        uVar9 = 0;
        uVar6 = uVar7 & 0xffffffffffffff00;
        uVar7 = uVar7 & 0xff;
        goto LAB_00c33328;
      }
    }
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_00c33328:
  auVar12._0_8_ = uVar7 | uVar6;
  auVar12._8_8_ = uVar9 & 0xffffffff | uVar11 << 0x20;
  return auVar12;
}


