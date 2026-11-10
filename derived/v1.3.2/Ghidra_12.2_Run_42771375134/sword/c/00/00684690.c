/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00684690; name: FUN_00684690
 */


undefined8 FUN_00684690(long param_1,long *param_2,long param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  (**(code **)(*param_2 + 0xa8))(param_2,param_3,8,1);
  lVar4 = FUN_005c56e0(param_3,"SiIOVFS",1);
  if (lVar4 == 0) {
    cVar1 = (**(code **)(*param_2 + 0xe8))(param_2,1);
    *(char *)(param_3 + 8) = cVar1;
    if ((byte)(cVar1 - 1U) < 2) {
      (**(code **)(*param_2 + 0x68))(param_2,cVar1);
      uVar2 = (**(code **)(*param_2 + 0xe8))(param_2,1);
      *(undefined1 *)(param_3 + 9) = uVar2;
      uVar2 = (**(code **)(*param_2 + 0xe8))(param_2,1);
      *(undefined1 *)(param_3 + 10) = uVar2;
      uVar2 = (**(code **)(*param_2 + 0xe8))(param_2,1);
      *(undefined1 *)(param_3 + 0xb) = uVar2;
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_3 + 0x10) = uVar3;
      uVar3 = (**(code **)(*param_2 + 0xd8))(param_2,1);
      *(undefined4 *)(param_3 + 0x14) = uVar3;
      uVar5 = (**(code **)(*param_2 + 0xe0))(param_2,1);
      *(undefined8 *)(param_3 + 0x18) = uVar5;
      uVar5 = (**(code **)(*param_2 + 0xe0))(param_2,1);
      *(undefined8 *)(param_3 + 0x20) = uVar5;
      uVar5 = (**(code **)(*param_2 + 0xe0))(param_2,1);
      *(undefined8 *)(param_3 + 0x28) = uVar5;
      *(undefined8 *)(param_1 + 0xf0) = uVar5;
      return 1;
    }
  }
  return 0;
}


