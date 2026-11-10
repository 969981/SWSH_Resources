/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009aba80; name: FUN_009aba80
 */


void FUN_009aba80(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined1 local_48;
  
  uVar3 = FUN_00942420();
  cVar1 = FUN_00945f40();
  if (cVar1 != '\0') {
    uVar7 = 0;
    do {
      puVar4 = (undefined8 *)FUN_00946110(uVar3,uVar7);
      if (((*(int *)(puVar4 + 1) == 3) && (*(char *)(puVar4 + 4) == '\0')) &&
         (uVar5 = FUN_008e1600(*puVar4), (uVar5 & 1) != 0)) {
        local_50 = *puVar4;
        local_48 = *(undefined1 *)((long)puVar4 + 0x1f);
        FUN_00942450(param_1);
        uVar6 = FUN_009259a0();
        FUN_009abc10(uVar6,local_58,&local_50);
        FUN_0093ad00(param_2,local_58[0]);
        *(undefined1 *)((long)puVar4 + 0x59) = 1;
      }
      uVar7 = uVar7 + 1;
      uVar2 = FUN_00945f40(uVar3);
    } while (uVar7 < (uVar2 & 0xff));
  }
  return;
}


