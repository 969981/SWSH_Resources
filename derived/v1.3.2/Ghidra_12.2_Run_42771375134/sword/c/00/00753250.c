/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00753250; name: FUN_00753250
 */


void FUN_00753250(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  FUN_006dae20(param_1,5);
  puVar1 = PTR_DAT_02715e38 + 0xa8;
  puVar2 = PTR_DAT_02715e38 + 0x118;
  *param_1 = (long)(PTR_DAT_02715e38 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  FUN_006cee90((long)param_1 + 0xfc,1,0);
  puVar1 = PTR_DAT_02715e40 + 0x10;
  param_1[0x21] = 0;
  param_1[0x22] = (long)puVar1;
  lVar5 = *(long *)(param_2 + 8);
  param_1[0x23] = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
    (**(code **)(param_2 + 0x20))(param_2 + 0x30,param_1 + 0x28);
    lVar5 = *(long *)(param_2 + 0x10);
    lVar3 = *(long *)(param_2 + 0x18);
    lVar4 = *(long *)(param_2 + 0x28);
    param_1[0x26] = *(long *)(param_2 + 0x20);
    param_1[0x27] = lVar4;
    param_1[0x24] = lVar5;
    param_1[0x25] = lVar3;
  }
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
    (**(code **)(param_2 + 0xa0))(param_2 + 0xb0,param_1 + 0x38);
    lVar5 = *(long *)(param_2 + 0x90);
    lVar3 = *(long *)(param_2 + 0x98);
    lVar4 = *(long *)(param_2 + 0xa8);
    param_1[0x36] = *(long *)(param_2 + 0xa0);
    param_1[0x37] = lVar4;
    param_1[0x34] = lVar5;
    param_1[0x35] = lVar3;
  }
  param_1[0x46] = 0;
  puVar1 = PTR_DAT_02715e48;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x48] = 0;
  param_1[0x22] = (long)(puVar1 + 0x10);
  param_1[0x47] = param_1[1];
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}


