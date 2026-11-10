/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009280e0; name: FUN_009280e0
 */


undefined8
FUN_009280e0(long param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  
  uVar1 = FUN_008e0a00(param_2);
  cVar2 = FUN_00880fe0(param_3);
  *param_5 = 0;
  if (cVar2 == '\0') {
    cVar2 = FUN_00881010(param_3);
    iVar8 = 0;
    if (cVar2 != '\0') {
      iVar8 = 2;
    }
    iVar6 = FUN_00880b40(param_3);
  }
  else {
    iVar8 = 1;
    iVar6 = FUN_00880b40(param_3);
  }
  if (iVar6 == 8) {
    return 0;
  }
  FUN_008db2b0(*(undefined8 *)(param_1 + 0x10));
  FUN_008db3f0(*(undefined8 *)(param_1 + 0x10),3,uVar1);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x38,cVar2);
  FUN_008db380(*(undefined8 *)(param_1 + 0x10),0x39,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x48,0);
  FUN_008db460(*(undefined8 *)(param_1 + 0x10),0x59,0);
  FUN_008dad40(*(undefined8 *)(param_1 + 0x10),0x68);
  cVar2 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x38);
  cVar3 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x48);
  cVar4 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x59);
  cVar5 = FUN_008db610(*(undefined8 *)(param_1 + 0x10),0x39);
  FUN_008db2f0(*(undefined8 *)(param_1 + 0x10));
  if ((cVar3 != '\0') && (cVar4 == '\0')) {
    return 0;
  }
  if ((char)(cVar5 + cVar2) == '\0') {
    return 0;
  }
  if (iVar8 == 2) {
    param_4 = FUN_008e12a0(param_2,0x10);
  }
  else if (param_4 == 0) {
    uVar7 = 0;
    goto LAB_00928290;
  }
  uVar7 = FUN_008ec050(param_4,cVar5 + cVar2);
  uVar7 = FUN_008ec940(uVar7,1);
LAB_00928290:
  *param_5 = cVar4 != '\0';
  return uVar7;
}


