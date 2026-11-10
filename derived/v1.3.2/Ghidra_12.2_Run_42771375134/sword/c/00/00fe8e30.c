/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fe8e30; name: FUN_00fe8e30
 */


void FUN_00fe8e30(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  lVar4 = param_1[0xba];
  puVar1 = PTR_DAT_02723248 + 0xa8;
  puVar2 = PTR_DAT_02723248 + 0xe8;
  *param_1 = (long)(PTR_DAT_02723248 + 0x10);
  param_1[0xba] = 0;
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (lVar4 != 0) {
    uVar3 = param_1[0xbc];
    if (0x47 < uVar3) {
      uVar5 = 0;
      plVar6 = (long *)(lVar4 + 0x18);
      puVar1 = PTR_DAT_027232b0 + 0x10;
      do {
        plVar6[-3] = (long)puVar1;
        if (*plVar6 != 0) {
          (**(code **)(*(long *)(*plVar6 + 0x48) + 0x18))();
          *plVar6 = 0;
        }
        uVar5 = uVar5 + 1;
        plVar6 = plVar6 + 9;
      } while (uVar5 < uVar3 / 0x48);
      uVar3 = param_1[0xbc];
    }
    (**(code **)(*(long *)param_1[0xbb] + 0x18))((long *)param_1[0xbb],lVar4,uVar3,param_1[0xbd]);
  }
  FUN_00ff9a90(param_1);
  return;
}


