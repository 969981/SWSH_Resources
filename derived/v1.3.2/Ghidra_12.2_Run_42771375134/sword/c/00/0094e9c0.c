/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094e9c0; name: FUN_0094e9c0
 */


void FUN_0094e9c0(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  char local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_48 [8];
  
  local_5c[0] = 0;
  local_60[0] = '\0';
  FUN_0094eae0(param_1,local_5c,local_60,param_3);
  if (local_60[0] == '\0') {
    uVar2 = FUN_00942820(param_1,1);
    uVar5 = *param_3;
    lVar6 = FUN_00942510(param_1,1,0);
    if (lVar6 != 0) {
      uVar3 = FUN_008e1720(uVar5,0xc);
      uVar4 = FUN_008e1720(lVar6,0xc);
      uVar4 = uVar4 & 0xffff;
      if ((uVar3 & 0xffff) <= uVar4) {
        uVar1 = 0;
        if (uVar4 != 0) {
          uVar1 = ((uVar3 & 0xffff) << 0xc) / uVar4;
        }
        uVar4 = FUN_008ebfa0(0x100);
        if ((uVar2 & 0xff) * 0x50 + (uVar1 >> 5) <= uVar4) {
          local_48[0] = 0;
          goto LAB_0094ea3c;
        }
      }
    }
  }
  local_58 = *param_3;
  local_48[0] = 0;
  local_50 = local_5c[0];
  local_4f = 1;
  FUN_00942450(param_1);
  uVar5 = FUN_009252e0();
  FUN_0094ec70(uVar5,local_48,&local_58);
LAB_0094ea3c:
  *param_2 = local_48[0];
  return;
}


