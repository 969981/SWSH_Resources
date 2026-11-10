/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca6180; name: FUN_00ca6180
 */


undefined8 FUN_00ca6180(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_00ca6310(param_2,&local_70);
  if ((*(long *)(param_1 + 0x68) == 0) || (*(int *)(*(long *)(param_1 + 0x68) + 0x54) == 0)) {
    if (local_60 != 0) {
      return 0;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x68);
    if (lVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
      puVar1 = *(undefined8 **)(lVar5 + 0x60);
      puVar6 = puVar1;
      if (puVar1 != (undefined8 *)0x0) {
        puVar6 = puVar1 + -10;
        (**(code **)*puVar1)();
        uVar2 = FUN_00cb50a0();
        if ((uVar2 & 1) == 0) {
          puVar6 = (undefined8 *)0x0;
        }
      }
    }
    uVar2 = FUN_00c78d90(puVar6,local_70,local_60);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if ((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 0x54) == 0)) {
    if (local_58 == 0) {
      return 1;
    }
  }
  else {
    lVar5 = *(long *)(param_1 + 0x70);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
      puVar6 = *(undefined8 **)(lVar5 + 0x60);
      if (puVar6 != (undefined8 *)0x0) {
        plVar3 = (long *)(**(code **)*puVar6)(puVar6);
        lVar4 = FUN_00ca0490();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            puVar6 = puVar6 + -10;
            goto LAB_00ca6280;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
LAB_00ca6280:
    uVar2 = FUN_00ca0cc0(puVar6,local_68,local_58);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}


