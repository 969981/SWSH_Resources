/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049ca90; name: FUN_0049ca90
 */


void FUN_0049ca90(undefined8 param_1,undefined8 param_2,long *param_3,int param_4,long *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float fStack_64;
  
  puVar7 = (undefined8 *)*param_3;
  if (puVar7 != (undefined8 *)0x0) {
    switch((int)param_3[9]) {
    case 0:
      if ((((((*param_5 == 0) || (param_3[3] == *param_5)) &&
            (((int)param_5[1] == 0 || ((int)param_3[4] == (int)param_5[1])))) &&
           (((int)param_5[2] == 0 || ((int)param_3[5] == (int)param_5[2])))) &&
          (((char)param_5[3] == -1 || ((char)param_3[6] == (char)param_5[3])))) &&
         (((((char)param_5[4] == -1 || ((char)param_3[7] == (char)param_5[4])) &&
           ((param_5[5] == 0 || (param_3[8] == param_5[5])))) &&
          ((param_6 == (undefined8 *)0x0 ||
           (uVar3 = (**(code **)*param_6)(param_6), (uVar3 & 1) == 0)))))) {
        uVar3 = (ulong)*(uint *)(param_3 + 0xb);
        if (*(uint *)(param_3 + 0xb) == 0) {
          fVar8 = 0.0;
        }
        else {
          lVar5 = param_3[10];
          fVar8 = 0.0;
          lVar4 = lVar5 + 8;
          do {
            if (*(int *)(lVar4 + -4) == param_4) {
              local_68 = 0.0;
              fVar10 = (float)FUN_0042e770(param_2,lVar4,0,&local_68);
              fVar8 = fVar10 + fVar8;
              lVar5 = param_3[10];
              uVar3 = (ulong)*(uint *)(param_3 + 0xb);
            }
            lVar6 = lVar4 + 0x10;
            lVar4 = lVar4 + 0x18;
          } while (lVar6 != lVar5 + uVar3 * 0x18);
        }
        local_68 = fVar8;
        FUN_0044fbf0(*param_3,(int)param_3[1],&local_68,4);
      }
      break;
    case 1:
      if ((((*param_5 == 0) || (param_3[3] == *param_5)) &&
          ((((int)param_5[1] == 0 || ((int)param_3[4] == (int)param_5[1])) &&
           (((int)param_5[2] == 0 || ((int)param_3[5] == (int)param_5[2])))))) &&
         ((((char)param_5[3] == -1 || ((char)param_3[6] == (char)param_5[3])) &&
          (((((char)param_5[4] == -1 || ((char)param_3[7] == (char)param_5[4])) &&
            ((param_5[5] == 0 || (param_3[8] == param_5[5])))) &&
           ((param_6 == (undefined8 *)0x0 ||
            (uVar3 = (**(code **)*param_6)(param_6), (uVar3 & 1) == 0)))))))) {
        uVar2 = *(uint *)(param_3 + 0xb);
        uVar3 = (ulong)uVar2;
        if (*(int *)((long)param_3 + 0x4c) == 3) {
          if (uVar2 == 0) {
            fVar8 = 1.0;
          }
          else {
            lVar5 = param_3[10];
            fVar8 = 1.0;
            lVar4 = lVar5 + 8;
            do {
              if (*(int *)(lVar4 + -4) == param_4) {
                local_68 = 0.0;
                fVar10 = (float)FUN_0042e770(param_2,lVar4,0,&local_68);
                fVar8 = fVar10 * fVar8;
                lVar5 = param_3[10];
                uVar3 = (ulong)*(uint *)(param_3 + 0xb);
              }
              lVar6 = lVar4 + 0x10;
              lVar4 = lVar4 + 0x18;
            } while (lVar6 != lVar5 + uVar3 * 0x18);
          }
        }
        else if (uVar2 == 0) {
          fVar8 = 0.0;
        }
        else {
          lVar5 = param_3[10];
          fVar8 = 0.0;
          lVar4 = lVar5 + 8;
          do {
            if (*(int *)(lVar4 + -4) == param_4) {
              local_68 = 0.0;
              fVar10 = (float)FUN_0042e770(param_2,lVar4,0,&local_68);
              fVar8 = fVar10 + fVar8;
              lVar5 = param_3[10];
              uVar3 = (ulong)*(uint *)(param_3 + 0xb);
            }
            lVar6 = lVar4 + 0x10;
            lVar4 = lVar4 + 0x18;
          } while (lVar6 != lVar5 + uVar3 * 0x18);
        }
        (**(code **)(*(long *)*param_3 + 0x18))
                  (fVar8,(long *)*param_3,(int)param_3[1],param_4,
                   *(undefined4 *)((long)param_3 + 0x4c));
      }
      break;
    case 2:
      FUN_0049d070(param_2,param_1,param_3,param_4,&local_68,&fStack_64);
      (**(code **)*puVar7)(local_68,local_68 - fStack_64,puVar7,(int)param_3[1],param_5,param_6);
      break;
    case 3:
      uVar3 = (ulong)*(uint *)(param_3 + 0xb);
      if (*(uint *)(param_3 + 0xb) == 0) {
        fVar8 = 0.0;
      }
      else {
        lVar5 = param_3[10];
        fVar8 = 0.0;
        lVar4 = lVar5 + 8;
        do {
          if (*(int *)(lVar4 + -4) == param_4) {
            local_68 = 0.0;
            fVar10 = (float)FUN_0042e770(param_2,lVar4,0,&local_68);
            fVar8 = fVar10 + fVar8;
            lVar5 = param_3[10];
            uVar3 = (ulong)*(uint *)(param_3 + 0xb);
          }
          lVar6 = lVar4 + 0x10;
          lVar4 = lVar4 + 0x18;
        } while (lVar6 != lVar5 + uVar3 * 0x18);
        puVar7 = (undefined8 *)*param_3;
      }
      FUN_0046aca0(fVar8,puVar7,(int)param_3[1],param_5);
      break;
    default:
      lVar4 = puVar7[6];
      if (((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x70), lVar5 != 0)) &&
         ((0 < *(short *)(lVar5 + 0x90) ||
          ((0 < *(short *)(lVar5 + 0x94) && (*(char *)(lVar4 + 0xf0) != '\0')))))) {
        if ((int)param_3[1] == 0x39) {
          FUN_004678f0(param_1,param_2,puVar7,param_5,param_6);
          return;
        }
        uVar3 = FUN_00466df0(puVar7);
        if ((uVar3 & 1) != 0) {
          lVar4 = param_3[1];
          uVar3 = (ulong)*(uint *)(param_3 + 0xb);
          if (*(uint *)(param_3 + 0xb) == 0) {
            fVar10 = 0.0;
            fVar8 = 0.0;
          }
          else {
            lVar6 = param_3[10];
            fVar10 = 0.0;
            lVar5 = lVar6 + 8;
            do {
              if (*(int *)(lVar5 + -4) == param_4) {
                local_68 = 0.0;
                fVar8 = (float)FUN_0042e770(param_2,lVar5,0,&local_68);
                fVar10 = fVar8 + fVar10;
                lVar6 = param_3[10];
                uVar3 = (ulong)*(uint *)(param_3 + 0xb);
              }
              lVar1 = lVar5 + 0x10;
              lVar5 = lVar5 + 0x18;
            } while (lVar1 != lVar6 + uVar3 * 0x18);
            if ((int)uVar3 == 0) {
              fVar8 = 0.0;
            }
            else {
              fVar8 = 0.0;
              lVar5 = lVar6 + 8;
              do {
                if (*(int *)(lVar5 + -4) == param_4) {
                  local_68 = 0.0;
                  fVar9 = (float)FUN_0042e770(param_1,lVar5,0,&local_68);
                  fVar8 = fVar9 + fVar8;
                  lVar6 = param_3[10];
                  uVar3 = (ulong)*(uint *)(param_3 + 0xb);
                }
                lVar1 = lVar5 + 0x10;
                lVar5 = lVar5 + 0x18;
              } while (lVar1 != lVar6 + uVar3 * 0x18);
            }
          }
          FUN_00466bb0(fVar10,fVar8,puVar7,param_3,(int)lVar4,param_4,param_5,param_6);
        }
      }
      break;
    case 6:
      lVar4 = param_3[10];
      local_68 = 0.0;
      fVar8 = (float)FUN_0042e770(param_2,lVar4 + 8,0,&local_68);
      local_68 = 0.0;
      fVar10 = (float)FUN_0042e770(param_1,lVar4 + 8,0,&local_68);
      if (fVar8 != fVar10) {
        lVar4 = *param_3;
        FUN_004bc400(&local_68);
        if (lVar4 != 0) {
          FUN_004bc330(lVar4,param_5,(int)fVar8,param_6);
        }
        FUN_004bc420(&local_68);
      }
    }
  }
  return;
}


