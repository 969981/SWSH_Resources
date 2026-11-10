/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075cfd0; name: FUN_0075cfd0
 */


void FUN_0075cfd0(undefined8 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
                 undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,
                 undefined1 *param_9,undefined1 *param_10,undefined1 *param_11,undefined1 *param_12)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 local_6c [12];
  
  puVar4 = PTR_LAB_02715f70;
  puVar3 = PTR_LAB_02715f68;
  puVar2 = PTR_LAB_02715f60;
  local_6c[0] = 0xd;
  local_6c[1] = *param_2;
  lVar8 = 1;
  local_6c[2] = *param_3;
  local_6c[3] = *param_4;
  local_6c[4] = *param_5;
  local_6c[5] = *param_6;
  local_6c[6] = *param_7;
  local_6c[7] = *param_8;
  local_6c[8] = *param_9;
  local_6c[9] = *param_10;
  local_6c[10] = *param_11;
  local_6c[0xb] = *param_12;
switchD_0075d0cc_caseD_8:
  if (lVar8 == 0xc) {
    return;
  }
  puVar1 = local_6c + lVar8;
  lVar8 = lVar8 + 1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(*puVar1) {
  case 0:
    uVar5 = *param_1;
    pcVar6 = "base";
    puVar7 = PTR_LAB_02715f78;
    break;
  case 1:
    uVar5 = *param_1;
    pcVar6 = "package";
    puVar7 = PTR_LAB_02715f80;
    break;
  case 2:
    uVar5 = *param_1;
    pcVar6 = "coroutine";
    puVar7 = PTR_LAB_02715f88;
    break;
  case 3:
    uVar5 = *param_1;
    pcVar6 = "string";
    puVar7 = PTR_LAB_02715f90;
    break;
  case 4:
    uVar5 = *param_1;
    pcVar6 = "os";
    puVar7 = PTR_LAB_02715f98;
    break;
  case 5:
    uVar5 = *param_1;
    pcVar6 = "math";
    puVar7 = PTR_LAB_02715fa0;
    break;
  case 6:
    uVar5 = *param_1;
    pcVar6 = "table";
    puVar7 = PTR_LAB_02715fa8;
    break;
  case 7:
    uVar5 = *param_1;
    pcVar6 = "debug";
    puVar7 = puVar2;
    break;
  default:
    goto switchD_0075d0cc_caseD_8;
  case 9:
    uVar5 = *param_1;
    pcVar6 = "io";
    puVar7 = puVar3;
    break;
  case 0xc:
    uVar5 = *param_1;
    pcVar6 = "utf8";
    puVar7 = puVar4;
  }
  FUN_0175e740(uVar5,pcVar6,puVar7,1);
  FUN_0175ef30(*param_1,0xfffffffe);
  goto switchD_0075d0cc_caseD_8;
}


