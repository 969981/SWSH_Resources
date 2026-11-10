/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a37a70; name: FUN_00a37a70
 */


void FUN_00a37a70(long param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)(param_1 + 0x648);
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x640);
  }
  uVar4 = *puVar1;
  lVar2 = 0x640;
  if (*(char *)(param_1 + 0x61d) != '\0') {
    lVar2 = 0x648;
  }
  uVar5 = *(undefined8 *)(param_1 + lVar2);
  if (*(char *)(param_1 + 0x67e) == '\0') {
    uVar3 = FUN_016b8190(uVar5);
    *(undefined8 *)(param_1 + 0x660) = uVar3;
  }
  else {
    *(undefined8 *)(param_1 + 0x660) = DAT_02a522b8;
    *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_1 + 0x678);
  }
  FUN_00ffd510((float)(param_2 & 1),param_1 + 0x100,&DAT_02154868);
  FUN_016b2da0(uVar5,0);
  FUN_016b2d70(uVar5,0);
  FUN_016b2eb0(uVar5);
  FUN_016b2da0(uVar4,1);
  FUN_016b2d70(uVar4,1);
  return;
}


