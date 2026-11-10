/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a4810; name: FUN_004a4810
 */


undefined8
FUN_004a4810(long param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined8 param_8,undefined4 param_9)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x28);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 2;
    }
    *(undefined1 *)(puVar2 + 4) = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[1] = 0xffffffffffffffff;
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar4 = *(long *)PTR_DAT_02712b50;
  }
  else {
    lVar4 = *(long *)PTR_DAT_02712b50;
  }
  if (lVar4 == 0) {
    return 2;
  }
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xff;
  local_60 = 0xff;
  local_58 = 0;
  if (puVar2 == (undefined8 *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(puVar2 + 3) != 0;
  }
  uVar3 = FUN_0049b200(lVar4,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9
                       ,&local_80,2,bVar1);
  if ((int)uVar3 != 1) {
    return uVar3;
  }
  uVar3 = FUN_004a4970(param_1,param_5);
  if (param_3 != 2) {
    return uVar3;
  }
  if ((int)uVar3 == 1) {
    *(char *)(*(long *)(param_1 + 8) + 0x20) = (char)uVar3;
    return uVar3;
  }
  return uVar3;
}


