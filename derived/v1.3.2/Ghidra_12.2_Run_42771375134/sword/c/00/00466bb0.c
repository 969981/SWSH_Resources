/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00466bb0; name: FUN_00466bb0
 */


undefined8
FUN_00466bb0(float param_1,float param_2,long param_3,undefined8 param_4,undefined4 param_5,
            undefined8 param_6,void *param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_80 [2];
  undefined1 auStack_78 [48];
  undefined1 local_48;
  undefined8 local_40;
  float local_38;
  
  local_48 = 0;
  local_80[0] = param_5;
  memcpy(auStack_78,param_7,0x30);
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_3 + 0x18);
    lVar4 = lVar3;
    local_40 = param_8;
    local_38 = param_1 - param_2;
    do {
      plVar1 = *(long **)(lVar4 + 0x10);
      if (((plVar1 != (long *)0x0) && (plVar1[0xe] != 0)) && (0 < *(short *)(plVar1[0xe] + 0x90))) {
        (**(code **)(*plVar1 + 0xb8))(plVar1,local_80);
        lVar3 = *(long *)(param_3 + 0x18);
        uVar2 = *(uint *)(param_3 + 0x20);
      }
      lVar4 = lVar4 + 0x30;
    } while (lVar4 != lVar3 + (ulong)uVar2 * 0x30);
  }
  return 1;
}


