/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007ef200; name: FUN_007ef200
 */


void FUN_007ef200(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  byte local_90 [16];
  void *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  
  if (0 < *(int *)(param_2 + 9)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_007f4010(param_1,param_2[10] + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x70) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0xa8;
    } while (lVar5 < *(int *)(param_2 + 9));
  }
  if (0 < *(int *)(param_2 + 0xb)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_007f42b0(param_1,param_2[0xc] + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0x88) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar5 < *(int *)(param_2 + 0xb));
  }
  if (0 < *(int *)(param_2 + 0xd)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar2 = param_2[0xe] + lVar4;
      lVar7 = *(long *)(lVar2 + 0x10);
      if (lVar7 != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_3 + 0xa0) + lVar5 * 8 + 8);
        lVar8 = *(long *)(lVar7 + 0x90);
        lVar1 = FUN_008469a0();
        if (((lVar8 != lVar1) && (*(int *)(*(long *)(lVar7 + 0x90) + 0x4c) == 3)) &&
           ((lVar7 = *(long *)(*(long *)(lVar2 + 0x10) + 0x90), *(char *)(lVar7 + 0x4b) != '\0' ||
            (*(char *)(lVar7 + 0x80) != '\0')))) {
          FUN_007eac10(param_1,*(undefined8 *)(lVar2 + 8),uVar6,0,
                       "Files with optimize_for = LITE_RUNTIME cannot define services unless you set both options cc_generic_services and java_generic_sevices to false."
                      );
        }
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x30;
    } while (lVar5 < *(int *)(param_2 + 0xd));
  }
  if (0 < *(int *)(param_2 + 0xf)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      FUN_007f46e0(param_1,param_2[0x11] + lVar4,
                   *(undefined8 *)(*(long *)(param_3 + 0xb8) + lVar5 * 8 + 8));
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x90;
    } while (lVar5 < *(int *)(param_2 + 0xf));
  }
  lVar4 = param_2[0x12];
  lVar5 = FUN_008469a0();
  if (((lVar4 == lVar5) || (*(int *)(param_2[0x12] + 0x4c) != 3)) && (0 < *(int *)(param_2 + 3))) {
    lVar5 = 0;
    do {
      lVar4 = *(long *)(param_2[4] + lVar5 * 8);
      if (((lVar4 != 0) && (lVar7 = *(long *)(lVar4 + 0x90), lVar2 = FUN_008469a0(), lVar7 != lVar2)
          ) && (*(int *)(*(long *)(lVar4 + 0x90) + 0x4c) == 3)) {
        uVar6 = *param_2;
        std::operator+("Files that do not use optimize_for = LITE_RUNTIME cannot import files which do use this option.  This file is not lite, but it imports \""
                       ,(string *)**(undefined8 **)(param_2[4] + lVar5 * 8));
        puVar3 = (ulong *)std::string::append((char *)local_90);
        local_78 = *puVar3;
        local_70 = puVar3[1];
        local_68 = (void *)puVar3[2];
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        FUN_007eaaf0(param_1,uVar6,param_3,9,&local_78);
        if ((local_78 & 1) != 0) {
          operator_delete(local_68);
        }
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
          if (*(int *)((long)param_2 + 0x7c) != 3) {
            return;
          }
          goto LAB_007ef40c;
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_2 + 3));
  }
  if (*(int *)((long)param_2 + 0x7c) == 3) {
LAB_007ef40c:
    FUN_007f48e0(param_1,param_2,param_3);
  }
  return;
}


