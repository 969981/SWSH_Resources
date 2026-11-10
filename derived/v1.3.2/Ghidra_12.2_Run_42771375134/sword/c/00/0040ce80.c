/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ce80; name: FUN_0040ce80
 */


undefined8 FUN_0040ce80(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_170 [264];
  long local_68 [5];
  
  FUN_00418860(auStack_170,*(undefined8 *)(param_1 + 0x10),0);
  if (local_68[0] != 0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      (**(code **)(**(long **)(param_1 + 0x10) + 0x98))(*(long **)(param_1 + 0x10),auStack_170,0);
    }
    puVar1 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x20);
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar1 + 1) = 1;
      lVar2 = FUN_00419150(auStack_170,0);
      uVar3 = FUN_00419200(local_68,param_4 - lVar2);
      *puVar1 = uVar3;
      puVar1[2] = param_2;
      if (*(long *)(local_68[0] + 0x10) == 0) {
        *(undefined8 **)(local_68[0] + 0x10) = puVar1;
        uVar3 = 1;
        puVar1[3] = 0;
      }
      else {
        uVar3 = 1;
        puVar1[3] = *(long *)(local_68[0] + 0x10);
        *(undefined8 **)(local_68[0] + 0x10) = puVar1;
      }
      goto LAB_0040cf60;
    }
  }
  uVar3 = 2;
LAB_0040cf60:
  FUN_004188d0(auStack_170);
  return uVar3;
}


