/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006370b0; name: FUN_006370b0
 */


void FUN_006370b0(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  plVar1 = (long *)FUN_00636e70(param_1,uVar2,1);
  if (plVar1 != (long *)0x0) {
    local_88 = 0x400000029;
    local_80 = 4;
    local_58 = 0;
    uStack_50 = 0;
    local_70 = 0x800000000;
    local_68 = 0x2000000000;
    local_78 = 1;
    local_60 = 0;
    local_74 = 0;
    local_72 = 0;
    local_48 = 0;
    local_3c = 0xffffffffffffffff;
    local_44 = 0xffffffffffffffff;
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_88);
  }
  plVar1 = (long *)FUN_00636e70(param_1,uVar2,2);
  if (plVar1 != (long *)0x0) {
    local_88 = 0x400000029;
    local_80 = 4;
    local_58 = 0;
    uStack_50 = 0;
    local_78 = 1;
    local_70 = 0x400000000;
    local_68 = 0x2000000000;
    local_60 = 0;
    local_74 = 0;
    local_72 = 0;
    local_48 = 0;
    local_3c = 0xffffffffffffffff;
    local_44 = 0xffffffffffffffff;
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_88);
  }
  plVar1 = (long *)FUN_00636e70(param_1,uVar2,3);
  if (plVar1 != (long *)0x0) {
    local_88 = 0x400000029;
    local_80 = 4;
    local_58 = 0;
    uStack_50 = 0;
    local_78 = 1;
    local_70 = 0x800000000;
    local_68 = 0x4000000000;
    local_60 = 0;
    local_74 = 0;
    local_72 = 0;
    local_48 = 0;
    local_3c = 0xffffffffffffffff;
    local_44 = 0xffffffffffffffff;
    (**(code **)(*plVar1 + 0xa8))(plVar1,&local_88);
  }
  return;
}


