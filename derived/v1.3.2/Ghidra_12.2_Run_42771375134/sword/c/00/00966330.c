/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00966330; name: FUN_00966330
 */


void FUN_00966330(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_78 [8];
  long local_70;
  long lStack_68;
  uint local_60;
  long local_58;
  long lStack_50;
  undefined1 local_48;
  
  lVar5 = param_3[3];
  if (*(char *)(lVar5 + 9) == '\0') {
    if (*(int *)(lVar5 + 4) == 7) {
      *(undefined4 *)(lVar5 + 4) = *(undefined4 *)(*param_3 + 0x34);
    }
  }
  else {
    uVar2 = FUN_009423b0(param_1);
    FUN_009361a0(uVar2,param_3[2],(char)param_3[4],*param_3 + 0x34,*param_3,
                 *(undefined1 *)((long)param_3 + 0x21));
    uVar6 = (ulong)*(byte *)(param_3 + 4);
    if (*(byte *)(param_3 + 4) != 0) {
      uVar7 = 0;
      do {
        if (7 < *(int *)(*param_3 + uVar7 * 4 + 0x34)) {
          uVar1 = FUN_008e0a00(*(undefined8 *)(*param_3 + uVar7 * 8));
          uVar2 = FUN_00942380(param_1);
          uVar3 = FUN_00942390(param_1);
          uVar4 = FUN_009423b0(param_1);
          FUN_0092f930(uVar2,uVar3,uVar4,8,uVar1,0,0);
          uVar6 = (ulong)*(byte *)(param_3 + 4);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar6);
    }
  }
  lStack_68 = param_3[1];
  local_70 = param_3[2];
  local_58 = *param_3;
  local_48 = *(undefined1 *)((long)param_3 + 0x21);
  lStack_50 = local_58 + 0x48;
  local_60 = (uint)*(byte *)(param_3 + 4);
  FUN_00942450(param_1);
  uVar2 = FUN_00925280();
  FUN_00966530(uVar2,auStack_78,&local_70);
  return;
}


