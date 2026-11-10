/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00805050; name: FUN_00805050
 */


void FUN_00805050(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  
  FUN_00805160();
  iVar1 = (**(code **)(*param_3 + 0x30))(param_3,param_2,param_4);
  FUN_00809680(param_5,&DAT_01cf9849,3);
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      if (iVar4 != 0) {
        FUN_00809680(param_5,&DAT_01d337da,2);
      }
      FUN_00804540(param_1,param_2,param_3,param_4,iVar4,param_5);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  if (*(char *)(param_1 + 4) == '\0') {
    FUN_00809680(param_5,&DAT_01d0a4c9,2);
    *(undefined1 *)(param_5 + 0x14) = 1;
    puVar2 = &DAT_01d0a4cb;
    uVar3 = 0;
  }
  else {
    puVar2 = &DAT_01ce85ba;
    uVar3 = 2;
  }
  FUN_00809680(param_5,puVar2,uVar3);
  return;
}


