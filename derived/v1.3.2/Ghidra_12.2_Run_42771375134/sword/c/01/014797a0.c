/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014797a0; name: FUN_014797a0
 */


void FUN_014797a0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined6 uStack_4e;
  undefined8 local_48;
  undefined1 local_40 [16];
  
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_0146e370();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto LAB_01479800;
        }
      }
    }
    puVar3 = (undefined8 *)0x0;
  }
LAB_01479800:
  uStack_54 = 1;
  uStack_52 = 0xffff;
  uStack_50 = 0;
  local_60 = 0x8abaf272a347e952;
  local_58 = 4;
  local_90 = puVar3[0x11];
  local_a0 = puVar3[0xf];
  local_98 = puVar3[0x10];
  local_88 = puVar3[0x12];
  local_80 = puVar3[0x13];
  local_78 = puVar3[0x14];
  local_70 = puVar3[0x15];
  local_68 = 5;
  local_40 = FUN_014711e0(*(undefined8 *)(param_1 + 0x90));
  lVar2 = *(long *)(param_1 + 0x88);
  local_108 = local_98;
  local_110 = local_a0;
  local_e8 = local_78;
  local_f0 = local_80;
  local_f8 = local_88;
  local_100 = local_90;
  local_c8 = CONCAT26(uStack_52,CONCAT15(uStack_53,CONCAT14(uStack_54,local_58)));
  local_d0 = local_60;
  local_d8 = CONCAT44(uStack_64,local_68);
  local_e0 = local_70;
  local_b8 = local_48;
  local_c0 = CONCAT62(uStack_4e,uStack_50);
  local_b0 = local_40;
  FUN_01038a10(*(undefined8 *)(lVar2 + 0x5e0),&local_110);
  FUN_00ffcad0(lVar2 + 0x100,1);
  FUN_01038bb0(*(undefined8 *)(lVar2 + 0x5e0));
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x88),0);
  return;
}


