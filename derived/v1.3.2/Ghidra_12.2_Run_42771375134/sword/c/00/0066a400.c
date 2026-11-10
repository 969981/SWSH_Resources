/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066a400; name: FUN_0066a400
 */


undefined8 FUN_0066a400(undefined8 param_1,long *param_2,int *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_2 == (long *)0x0) {
    uVar2 = 0;
  }
  else {
    FUN_00683020(param_2,0x10,0);
    (**(code **)(*param_2 + 400))(param_2,*param_3,1);
    (**(code **)(*param_2 + 400))(param_2,param_3[0x201],1);
    (**(code **)(*param_2 + 400))(param_2,param_3[0x206],1);
    if (0 < *param_3) {
      lVar1 = 0;
      piVar3 = param_3 + 3;
      do {
        (**(code **)(*param_2 + 400))(param_2,piVar3[-2],1);
        (**(code **)(*param_2 + 400))(param_2,piVar3[-1],1);
        (**(code **)(*param_2 + 400))(param_2,*piVar3,1);
        (**(code **)(*param_2 + 400))(param_2,piVar3[1],1);
        (**(code **)(*param_2 + 400))(param_2,piVar3[2],1);
        (**(code **)(*param_2 + 400))(param_2,piVar3[3],1);
        lVar1 = lVar1 + 1;
        piVar3 = piVar3 + 8;
      } while (lVar1 < *param_3);
    }
    if (param_3[0x201] < 1) {
      uVar2 = 1;
    }
    else {
      lVar1 = 0;
      uVar2 = 1;
      do {
        (**(code **)(*param_2 + 400))(param_2,param_3[lVar1 + 0x202],1);
        lVar1 = lVar1 + 1;
      } while (lVar1 < param_3[0x201]);
    }
  }
  return uVar2;
}


