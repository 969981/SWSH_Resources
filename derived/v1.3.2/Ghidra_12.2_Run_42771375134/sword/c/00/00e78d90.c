/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e78d90; name: FUN_00e78d90
 */


ulong FUN_00e78d90(long *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined8 local_f0;
  undefined8 local_e8 [5];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined1 local_67;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 local_48;
  
  puVar3 = PTR_DAT_0271ed90;
  puVar2 = PTR_DAT_0271ed88;
  plVar10 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb0);
  plVar1 = *(long **)(*(long *)PTR_DAT_027194d8 + 0xb8);
  do {
    if (plVar10 == plVar1) {
      uVar8 = FUN_00e78be0(param_1,param_2);
      return uVar8;
    }
    lVar9 = *plVar10;
    plVar7 = (long *)(*(code *)**(undefined8 **)(lVar9 + 0x50))((undefined8 *)(lVar9 + 0x50));
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar2), iVar4 != 0)) {
      uVar6 = FUN_0156b190();
      *(undefined8 *)puVar3 = uVar6;
      __cxa_guard_release(puVar2);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)puVar3) {
        if ((*(long *)(lVar9 + 0x1a0) == *param_1) &&
           (uVar8 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar8 & 1) == 0)) {
          plVar10 = (long *)(lVar9 + 0x48);
          (**(code **)(*plVar10 + 0x10))(plVar10);
          local_c0 = *(undefined8 *)(lVar9 + 0x4c8);
          local_e8[0] = *(undefined8 *)(lVar9 + 0x4d0);
          uVar8 = FUN_00e8d400(&local_c0,local_e8);
          if ((uVar8 & 1) == 0) {
            uVar5 = FUN_00e78be0(param_1,param_2);
          }
          else {
            local_b8 = *(undefined8 *)(lVar9 + 0xb8);
            local_c0 = *(undefined8 *)(lVar9 + 0xb0);
            local_a8 = *(undefined8 *)(lVar9 + 0xa8);
            local_b0 = *(undefined8 *)(lVar9 + 0xa0);
            local_a0 = *(undefined8 *)(param_2 + 4);
            uStack_98 = *(undefined8 *)(param_2 + 6);
            FUN_00a92cd0(param_2[9],0,0);
            local_80 = CONCAT44(extraout_var,extraout_s0);
            local_90 = *(undefined1 *)(param_2 + 8);
            local_68 = *(byte *)(param_2 + 0xb) ^ 1;
            local_67 = *(undefined1 *)(param_2 + 0xd);
            uStack_60 = param_2[0xc];
            local_64 = 0;
            local_5c = 0;
            local_70 = *param_2;
            local_6c = param_2[10];
            local_48 = *(undefined8 *)(lVar9 + 0x4c8);
            local_f0 = *(undefined8 *)(lVar9 + 0x4d0);
            uStack_78 = extraout_var_00;
            uStack_58 = uStack_60;
            FUN_00e8d4e0(local_e8,&local_48,&local_f0);
            if (*(long *)(lVar9 + 0x1d8) != 0) {
              FUN_00e86b90(lVar9 + 0x1e0,*(long *)(lVar9 + 0x1d8),lVar9,&local_c0,local_e8);
            }
            uVar5 = 1;
          }
          (**(code **)(*plVar10 + 0x18))(plVar10);
          return (ulong)(uVar5 & 1);
        }
        break;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}


