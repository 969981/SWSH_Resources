/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0099d660; name: FUN_0099d660
 */


void FUN_0099d660(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined8 uVar2;
  long lVar3;
  char local_48;
  char local_47;
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined8 local_38;
  
  uVar2 = FUN_009423e0();
  uVar1 = FUN_0092c390(uVar2,*(undefined8 *)(param_3 + 2),*param_3);
  FUN_0093b2e0(*(undefined8 *)(param_3 + 4));
  lVar3 = FUN_0093b2f0(*(undefined8 *)(param_3 + 4));
  if (lVar3 != 0) {
    do {
      while( true ) {
        local_40 = FUN_008e0a00(*(undefined8 *)(param_3 + 2));
        local_3f = FUN_008e0a00(lVar3);
        local_3e = 0;
        local_38 = 0;
        local_3c = uVar1;
        FUN_00942450(param_1);
        uVar2 = FUN_00925390();
        FUN_009455b0(uVar2,&local_48,&local_40);
        if (local_48 == '\0') break;
        lVar3 = FUN_00942400(param_1);
        FUN_0093af10(lVar3 + 0x10);
        lVar3 = FUN_0093b2f0(*(undefined8 *)(param_3 + 4));
joined_r0x0099d724:
        if (lVar3 == 0) {
          return;
        }
      }
      if (local_47 != '\0') {
        lVar3 = FUN_0093b2f0(*(undefined8 *)(param_3 + 4));
        goto joined_r0x0099d724;
      }
      FUN_009423b0(param_1);
      FUN_009366b0();
      lVar3 = FUN_0093b2f0(*(undefined8 *)(param_3 + 4));
    } while (lVar3 != 0);
  }
  return;
}


