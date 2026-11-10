/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f8800; name: FUN_011f8800
 */


void FUN_011f8800(undefined1 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  long lVar4;
  char local_60 [16];
  undefined1 local_50 [8];
  undefined8 local_48;
  char local_40;
  undefined8 local_3c;
  
  pcVar3 = (char *)(**(code **)(*param_2 + 0x10))();
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\x01')) {
    *param_1 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x10))(param_2);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 1;
    }
    (**(code **)(*param_2 + 0x18))(local_60,param_2);
    FUN_011f8060(local_50,lVar1,local_60);
    *param_1 = 0;
    puVar2 = PTR_DAT_02725d38;
    param_1[0x18] = 0;
    *(undefined **)(param_1 + 8) = puVar2 + 0x10;
    *(undefined8 *)(param_1 + 0x10) = local_48;
    if (local_40 == '\0') {
      *param_1 = 1;
    }
    else {
      *(undefined8 *)(param_1 + 0x1c) = local_3c;
      param_1[0x18] = 1;
      *param_1 = 1;
    }
  }
  return;
}


