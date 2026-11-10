/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009af0f0; name: FUN_009af0f0
 */


void FUN_009af0f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_58 [8];
  
  uVar3 = FUN_00945f40(param_3);
  if ((uVar3 & 0xff) != 0) {
    uVar7 = 0;
    do {
      while (((puVar5 = (undefined8 *)FUN_00946110(param_3,uVar7),
              *(char *)((long)puVar5 + 0x59) != '\0' || (*(int *)(puVar5 + 1) != 3)) ||
             (*(char *)(puVar5 + 4) != '\0'))) {
        uVar7 = uVar7 + 1;
        if ((uVar3 & 0xff) <= (uVar7 & 0xff)) {
          return;
        }
      }
      uVar4 = FUN_008e0a00(*puVar5);
      FUN_00942380(param_1);
      uVar4 = FUN_008f94e0(uVar4);
      uVar1 = *(undefined1 *)((long)puVar5 + 0x1f);
      uVar2 = *(undefined1 *)((long)puVar5 + 0x1e);
      uVar6 = FUN_009425f0(param_1,uVar4);
      local_70 = FUN_00914310(uVar6,uVar2);
      local_68 = uVar1;
      FUN_00942450(param_1);
      uVar6 = FUN_009259a0();
      FUN_009abc10(uVar6,local_58,&local_70);
      FUN_0093ad00(param_2,local_58[0]);
      *(undefined1 *)((long)puVar5 + 0x59) = 1;
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xff) < (uVar3 & 0xff));
  }
  return;
}


