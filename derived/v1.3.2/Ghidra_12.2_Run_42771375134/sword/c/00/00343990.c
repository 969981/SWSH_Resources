/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00343990; name: FUN_00343990
 */


void FUN_00343990(long *param_1,undefined8 *param_2,uint param_3,long *param_4,undefined8 param_5,
                 uint param_6,undefined8 param_7,long *param_8)

{
  size_t sVar1;
  bool bVar2;
  ulong uVar3;
  char *pcVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  undefined1 local_64 [4];
  
  if (param_6 != 0) {
    uVar6 = 0;
    do {
      uVar9 = (uint)*(ushort *)(*param_4 + (ulong)((int)param_4[1] * uVar6));
      if ((uVar9 != 0) && (pcVar4 = (char *)*param_8, pcVar4 != (char *)0x0)) {
        bVar2 = false;
        uVar3 = 0;
        plVar7 = param_8;
        uVar8 = 1;
        do {
          if ((*(uint *)(param_8 + uVar3 * 2 + 1) & uVar9) != 0) {
            if (bVar2) {
              pcVar5 = *(code **)*param_2;
              sVar1 = strlen("|");
              (*pcVar5)(param_2,&DAT_01d2f65e,sVar1);
              pcVar4 = (char *)*plVar7;
              if (pcVar4 != (char *)0x0) goto LAB_00343a40;
            }
            else {
LAB_00343a40:
              if (*pcVar4 != '\0') {
                pcVar5 = *(code **)*param_2;
                sVar1 = strlen(pcVar4);
                (*pcVar5)(param_2,pcVar4,sVar1);
              }
            }
            bVar2 = true;
          }
          plVar7 = param_8 + uVar8 * 2;
          pcVar4 = (char *)*plVar7;
          uVar3 = uVar8;
          uVar8 = (ulong)((int)uVar8 + 1);
        } while (pcVar4 != (char *)0x0);
      }
      if (uVar6 == 0) {
LAB_00343a90:
        pcVar5 = *(code **)*param_2;
        pcVar4 = " ";
      }
      else {
        uVar9 = 0;
        if (param_3 != 0) {
          uVar9 = uVar6 / param_3;
        }
        if (uVar6 != uVar9 * param_3) goto LAB_00343a90;
        pcVar5 = *(code **)*param_2;
        pcVar4 = "\n\t\t\t";
      }
      sVar1 = strlen(pcVar4);
      (*pcVar5)(param_2,pcVar4,sVar1);
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_6);
    local_64[0] = 0;
    (**(code **)*param_2)(param_2,local_64,1);
    (**(code **)(*param_1 + 0x10))(param_1,param_7,param_2[4]);
    param_2[3] = 0;
  }
  return;
}


