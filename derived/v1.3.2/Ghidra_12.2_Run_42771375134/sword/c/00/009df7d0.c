/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009df7d0; name: FUN_009df7d0
 */


void FUN_009df7d0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((param_2[1] == 0) &&
     (uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0xd),*(undefined1 *)((long)param_1 + 0x6d),0),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_009dee50(param_1[0xc],*(char *)((long)param_1 + 0x6c) != '\0',0,*param_1);
    FUN_0090e260(*param_2,0,uVar2);
  }
  if ((param_2[2] == 0) &&
     (uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0xd),*(undefined1 *)((long)param_1 + 0x6d),1),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_009dee50(param_1[0xc],*(char *)((long)param_1 + 0x6c) != '\0',1,*param_1);
    FUN_0090e260(*param_2,1,uVar2);
  }
  if ((param_2[3] == 0) &&
     (uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0xd),*(undefined1 *)((long)param_1 + 0x6d),2),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_009dee50(param_1[0xc],*(char *)((long)param_1 + 0x6c) != '\0',2,*param_1);
    FUN_0090e260(*param_2,2,uVar2);
  }
  if ((param_2[4] == 0) &&
     (uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0xd),*(undefined1 *)((long)param_1 + 0x6d),3),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_009dee50(param_1[0xc],*(char *)((long)param_1 + 0x6c) != '\0',3,*param_1);
    FUN_0090e260(*param_2,3,uVar2);
  }
  if ((param_2[5] == 0) &&
     (uVar1 = FUN_008efa90(*(undefined4 *)(param_1 + 0xd),*(undefined1 *)((long)param_1 + 0x6d),4),
     (uVar1 & 1) != 0)) {
    uVar2 = FUN_009dee50(param_1[0xc],*(char *)((long)param_1 + 0x6c) != '\0',4,*param_1);
    FUN_0090e260(*param_2,4,uVar2);
    return;
  }
  return;
}


