/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aa6560; name: FUN_00aa6560
 */


void FUN_00aa6560(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  long local_a8 [2];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined1 local_74;
  undefined2 local_73;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0xd8);
  uVar8 = 0;
  lVar5 = param_1 + 0x130;
  do {
    if (*(short *)(lVar5 + 0x11c) != 0xf9) {
      if (*(long *)(lVar5 + 8) == 0) {
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      else {
        FUN_006e2100(*(long *)(lVar5 + 8),lVar5);
        lVar2 = *(long *)(lVar5 + 8);
        *(undefined8 *)(lVar5 + 8) = 0;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        }
      }
      local_70 = 0;
      uStack_68 = 0;
      FUN_00a66750(*(undefined8 *)(param_1 + 8),&local_70);
      puVar7 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
      uVar1 = *puVar7;
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = plVar6;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,0x4d0,0x10);
      if (lVar3 == 0) {
        (**(code **)(*plVar6 + 0xb8))(plVar6);
      }
      FUN_00adc840(lVar3,*(undefined8 *)(param_1 + 8),plVar6,&local_70,(long)puVar7 + (ulong)uVar1);
      *(long **)(lVar3 + 8) = plVar6;
      *(long *)(lVar3 + 0x10) = lVar3;
      *(undefined8 *)(lVar3 + 0x18) = 0x4d0;
      *(undefined8 *)(lVar3 + 0x20) = 0x10;
      *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar5 + 0x110) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar5 + 0x110) + 0x48) + 0x18))();
        *(undefined8 *)(lVar5 + 0x110) = 0;
      }
      *(long *)(lVar5 + 0x110) = lVar3;
      uVar4 = FUN_00adc890(lVar3,lVar5 + -0x110,0,0,0);
      local_a8[1] = 0xff000000ff;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 100;
      local_98 = 0;
      local_74 = 0;
      local_7c = 0;
      local_73 = 0x101;
      local_71 = 1;
      FUN_00aa7100(uVar4,local_a8 + 1,lVar5 + -0x110);
      uVar4 = *(undefined8 *)(param_1 + 8);
      local_a8[0] = *(long *)(lVar5 + 0x110);
      if (local_a8[0] != 0) {
        (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x10))();
      }
      FUN_00a80d50(uVar4,local_a8,0,local_a8 + 1,0);
      if (local_a8[0] != 0) {
        (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
        local_a8[0] = 0;
      }
    }
    uVar8 = uVar8 + 1;
    lVar5 = lVar5 + 0x230;
    if (4 < uVar8) {
      return;
    }
  } while( true );
}


