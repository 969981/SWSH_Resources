/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00969990; name: FUN_00969990
 */


void FUN_00969990(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  char local_6c [4];
  char local_68 [4];
  char local_64 [4];
  undefined1 auStack_60 [8];
  undefined2 local_58;
  
  *param_2 = 0;
  FUN_00943e60(auStack_98);
  uVar2 = FUN_009423e0(param_1);
  FUN_0092a430(uVar2,*param_3,param_3[1],param_3[2],param_3[3],*(undefined2 *)(param_3 + 4),local_64
               ,local_68,local_6c,local_70,auStack_98);
  if (local_64[0] != '\0') {
    *param_2 = 1;
    uVar3 = FUN_00943f10(auStack_98);
    if ((uVar3 & 1) == 0) {
      if ((local_6c[0] == '\0' && local_68[0] == '\0') && (*(char *)((long)param_3 + 0x22) != '\0'))
      {
        uVar2 = FUN_009423b0(param_1);
        uVar1 = FUN_008e0a00(param_3[2]);
        FUN_009360c0(uVar2,0x120,uVar1);
        lVar4 = FUN_00942400(param_1);
        *(undefined1 *)(lVar4 + 0x34) = 1;
      }
    }
    else if (*(char *)((long)param_3 + 0x22) != '\0') {
      uVar1 = FUN_008e0a00(param_3[2]);
      local_58 = 0x1f;
      FUN_00943e60((ulong)&local_58 | 4);
      local_58 = CONCAT11(local_70[0],uVar1);
      FUN_00943eb0((ulong)&local_58 | 4,auStack_98);
      FUN_00942450(param_1);
      uVar2 = FUN_009256b0();
      FUN_0094c9b0(uVar2,auStack_60,&local_58);
      lVar4 = FUN_00942400(param_1);
      *(char *)(lVar4 + 0x34) = local_68[0];
    }
  }
  return;
}


