/*
 * File: INS.c
 *
 * Code generated for Simulink model 'INS'.
 *
 * Model version                  : 1.3911
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Thu Aug 17 14:41:30 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "INS.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

const INS_Out_Bus INS_rtZINS_Out_Bus = {
  0U,                                  /* timestamp */
  0.0F,                                /* phi */
  0.0F,                                /* theta */
  0.0F,                                /* psi */

  {
    0.0F, 0.0F, 0.0F, 0.0F }
  ,                                    /* quat */
  0.0F,                                /* p */
  0.0F,                                /* q */
  0.0F,                                /* r */
  0.0F,                                /* ax */
  0.0F,                                /* ay */
  0.0F,                                /* az */
  0.0F,                                /* vn */
  0.0F,                                /* ve */
  0.0F,                                /* vd */
  0.0F,                                /* airspeed */
  0.0,                                 /* lat */
  0.0,                                 /* lon */
  0.0,                                 /* alt */
  0.0,                                 /* lat_0 */
  0.0,                                 /* lon_0 */
  0.0,                                 /* alt_0 */
  0.0,                                 /* dx_dlat */
  0.0,                                 /* dy_dlon */
  0.0F,                                /* x_R */
  0.0F,                                /* y_R */
  0.0F,                                /* h_R */
  0.0F,                                /* h_AGL */
  0U,                                  /* flag */
  0U                                   /* status */
} ;                                    /* INS_Out_Bus ground */

/* Exported block parameters */
struct_6ZFSSBscNEvOifNJsobUVH INS_PARAM = {
  2.5F,
  0.4F,
  4.5F,
  0.25F,
  1.0F,
  1.0F,
  0.2F,
  0.05F,
  0.2F,
  0.3F,
  0U,
  0.25F,
  0.02F,
  0.01F,
  2.0F,
  1.0F,
  150U,
  100U,
  2.0F,
  1.0F,
  5U,
  2.0F,
  1.0F,
  0.2F,
  10U,
  2.0F,
  1.0F,
  0.2F,
  5U,
  5.0F,
  2.0F,
  0.2F,
  50U
} ;                                    /* Variable: INS_PARAM
                                        * Referenced by:
                                        *   '<S407>/Constant1'
                                        *   '<S407>/Gain2'
                                        *   '<S408>/Constant7'
                                        *   '<S408>/Gain3'
                                        *   '<S69>/Gain1'
                                        *   '<S72>/Constant'
                                        *   '<S72>/mag_correct_gain'
                                        *   '<S75>/Gain'
                                        *   '<S204>/Gain'
                                        *   '<S204>/Gain2'
                                        *   '<S204>/Gain3'
                                        *   '<S213>/Gain'
                                        *   '<S213>/Gain2'
                                        *   '<S213>/Gain3'
                                        *   '<S223>/Gain'
                                        *   '<S223>/Gain2'
                                        *   '<S243>/Gain'
                                        *   '<S243>/Gain1'
                                        *   '<S243>/Gain2'
                                        *   '<S252>/Gain'
                                        *   '<S252>/Gain1'
                                        *   '<S252>/Gain2'
                                        *   '<S261>/Gain'
                                        *   '<S261>/Gain1'
                                        *   '<S261>/Gain2'
                                        *   '<S270>/Gain'
                                        *   '<S270>/Gain1'
                                        *   '<S270>/Gain2'
                                        */

struct_TYt7YeNdxIDXfczXumtXXB INS_EXPORT = {
  2U,

  { 66, 97, 115, 101, 32, 73, 78, 83, 32, 118, 49, 46, 48, 46, 48, 0 }
} ;                                    /* Variable: INS_EXPORT
                                        * Referenced by:
                                        *   '<S4>/Constant'
                                        *   '<S376>/Constant'
                                        *   '<S389>/Constant'
                                        *   '<S421>/Constant'
                                        *   '<S429>/Constant'
                                        *   '<S447>/Constant'
                                        *   '<S454>/Constant'
                                        *   '<S11>/Constant'
                                        *   '<S12>/Constant'
                                        *   '<S13>/Constant'
                                        *   '<S14>/Constant'
                                        *   '<S15>/Constant'
                                        *   '<S16>/Constant'
                                        *   '<S17>/Constant'
                                        *   '<S406>/Constant'
                                        *   '<S99>/Constant1'
                                        *   '<S327>/Constant'
                                        *   '<S328>/Constant'
                                        *   '<S339>/Constant'
                                        *   '<S340>/Constant'
                                        *   '<S341>/Constant'
                                        */

/* Block parameters (default storage) */
Parameters_INS_T INS_P = {
  {
    0.002,
    9.8055F,

    { 60.6688499F, 63.1136093F, 61.9571686F, 58.5107918F, 53.9825211F,
      48.8148804F, 43.2272797F, 37.9078407F, 34.1241F, 32.8304787F, 33.9999084F,
      37.2338F, 42.2268791F, 48.3138885F, 53.9158897F, 57.2580109F, 57.8856F,
      60.04245F, 61.7999496F, 60.0581F, 56.2311287F, 51.54179F, 46.4250603F,
      41.1212692F, 36.3227692F, 33.2118912F, 32.5332794F, 34.0471611F,
      37.3293915F, 42.246109F, 48.2871819F, 53.8394814F, 57.0920105F,
      57.7239685F, 59.2624512F, 60.314F, 58.0622902F, 53.9296608F, 49.110981F,
      44.0556412F, 39.0556602F, 34.8108597F, 32.3865395F, 32.343071F,
      34.3287888F, 37.9020615F, 42.9333916F, 48.8902283F, 54.1666F, 57.0963F,
      57.5895386F, 58.3503799F, 58.6792908F, 55.9897194F, 51.6387596F,
      46.7298393F, 41.7255783F, 37.0196609F, 33.3552399F, 31.6662102F,
      32.3189316F, 34.8861198F, 38.9211082F, 44.1993408F, 50.0266304F,
      54.8299294F, 57.2408F, 57.4788208F, 57.3273582F, 56.9035416F, 53.8143883F,
      49.3266411F, 44.3983116F, 39.4714317F, 35.0624F, 32.0025291F, 31.1179695F,
      32.5729713F, 35.8210793F, 40.3716F, 45.8926392F, 51.5137215F, 55.7101402F,
      57.4770088F, 57.3836098F, 56.2152901F, 54.987751F, 51.4757309F,
      46.8875389F, 42.0354309F, 37.2897797F, 33.2398682F, 30.8035908F,
      30.7420692F, 33.0564F, 37.0471382F, 42.1026917F, 47.7855F, 53.1201286F,
      56.6581802F, 57.7437401F, 57.2923393F, 55.03825F, 52.9404488F, 48.9163399F,
      44.1882286F, 39.496521F, 35.1065407F, 31.5591698F, 29.77808F, 30.4949799F,
      33.6304092F, 38.3542404F, 43.8760414F, 49.6316719F, 54.6226616F,
      57.5236206F, 57.9748383F, 57.1917381F, 53.822979F, 50.7914505F,
      46.1322517F, 41.1598816F, 36.6611519F, 32.7988701F, 29.9308491F,
      28.8718204F, 30.32831F, 34.19133F, 39.550621F, 45.4551697F, 51.2053F,
      55.8290596F, 58.1714516F, 58.1068916F, 57.0691185F, 52.5992203F,
      48.5984192F, 43.2062683F, 37.8717499F, 33.5220108F, 30.2470798F,
      28.1678391F, 27.9196F, 30.1113892F, 34.5684F, 40.3826485F, 46.5514717F,
      52.2567482F, 56.5575F, 58.4858894F, 58.0859795F, 56.9144F, 51.3993F,
      46.4421F, 40.3025894F, 34.547039F, 30.2575F, 27.4956608F, 26.1988106F,
      26.7910194F, 29.6486797F, 34.4864502F, 40.5179214F, 46.8266106F,
      52.5147209F, 56.6392784F, 58.3791504F, 57.875679F, 56.7213402F,
      50.2558784F, 44.4099693F, 37.62146F, 31.5135899F, 27.2581291F, 24.9102097F,
      24.2886906F, 25.5767403F, 28.8667908F, 33.8025513F, 39.7895889F,
      46.0994682F, 51.8271217F, 55.9901314F, 57.8185081F, 57.4648705F,
      56.4902802F, 49.1997185F, 42.57724F, 35.3339F, 29.0936298F, 25.0088406F,
      23.0613403F, 22.9270802F, 24.5634F, 27.9123802F, 32.6535797F, 38.3665695F,
      44.5343208F, 50.3232689F, 54.7006683F, 56.8559608F, 56.8737F, 56.2281F,
      48.2592697F, 40.9926605F, 33.524189F, 27.4585304F, 23.8101292F,
      22.3264198F, 22.4728699F, 24.0649509F, 27.0742607F, 31.3636799F,
      36.6731491F, 42.6149712F, 48.4230499F, 53.0473595F, 55.6300392F,
      56.1536789F, 55.9474F, 47.4595909F, 39.67593F, 32.1695595F, 26.5328407F,
      23.5364799F, 22.5513496F, 22.8670197F, 24.2535191F, 26.7092609F, 30.3699F,
      35.23452F, 40.9257507F, 46.6428719F, 51.3816795F, 54.3264084F, 55.3779488F,
      55.6673393F, 46.8229904F, 38.6292F, 31.17342F, 26.0458908F, 23.731F,
      23.2198105F, 23.7449F, 25.0779209F, 27.0727406F, 30.0517807F, 34.4248F,
      39.8271484F, 45.3229218F, 49.9803391F, 53.1202087F, 54.6265106F, 55.41008F,
      46.3701401F, 37.856369F, 30.4379F, 25.7118893F, 23.9623108F, 23.9457703F,
      24.8520699F, 26.3540192F, 28.07197F, 30.42383F, 34.2626305F, 39.3300896F,
      44.5348396F, 48.9756813F, 52.1386719F, 53.9745712F, 55.1987915F, 46.1204F,
      37.3793297F, 29.9332905F, 25.3900604F, 24.0330906F, 24.6195107F,
      26.1449604F, 27.9149895F, 29.3943501F, 31.2168598F, 34.5874214F,
      39.3349609F, 44.2456512F, 48.4057884F, 51.4557686F, 53.4830093F,
      55.0553894F, 46.0917816F, 37.2448502F, 29.72896F, 25.1364403F, 23.9364891F,
      25.1510906F, 27.4533596F, 29.5271F, 30.7618294F, 32.1979485F, 35.2950897F,
      39.8154907F, 44.4367485F, 48.2638893F, 51.1002693F, 53.1952705F,
      54.9979897F, 46.2990417F, 37.5177307F, 29.9768505F, 25.1834908F, 23.8245F,
      25.4074497F, 28.3906803F, 30.8085804F, 31.9389F, 33.205349F, 36.2473F,
      40.6632F, 45.0166512F, 48.4885292F, 51.0664F, 53.1387596F, 55.0398903F,
      46.7511F, 38.2631493F, 30.85853F, 25.8815708F, 24.0939503F, 25.5383797F,
      28.7855701F, 31.4756F, 32.7162F, 34.0644608F, 37.2147713F, 41.6298294F,
      45.7915497F, 48.9735413F, 51.3314896F, 53.3283882F, 55.1878319F, 47.44804F,
      39.5251808F, 32.5166512F, 27.5721607F, 25.3377705F, 26.16325F, 29.0192299F,
      31.6294098F, 33.0449486F, 34.7081604F, 38.1154594F, 42.5916901F,
      46.6388092F, 49.6521187F, 51.8841515F, 53.7698517F, 55.4411F, 48.3783493F,
      41.3098793F, 34.99897F, 30.4203606F, 28.0098896F, 28.0544796F, 29.9036694F,
      31.8600807F, 33.2503319F, 35.3214188F, 39.08535F, 43.6334801F, 47.5973816F,
      50.54813F, 52.7364082F, 54.4578209F, 55.7903519F, 49.5174217F, 43.5770683F,
      38.2391205F, 34.3330383F, 32.1117897F, 31.5786591F, 32.20224F, 33.0197601F,
      33.9549484F, 36.1782188F, 40.1831512F, 44.7884789F, 48.7397118F,
      51.7291794F, 53.9053612F, 55.3693199F, 56.2177086F, 50.8273F, 46.24123F,
      42.0747795F, 39.0112915F, 37.2069397F, 36.3978882F, 35.9685097F,
      35.4701118F, 35.477581F, 37.3330803F, 41.2869F, 45.9653091F, 50.0739708F,
      53.2238F, 55.369F, 56.4536285F, 56.6971092F, 52.2585411F, 49.1803398F,
      46.2837486F, 44.0661697F, 42.6629906F, 41.6962891F, 40.4416885F, 38.6933F,
      37.5363197F, 38.6625099F, 42.3569298F, 47.1515198F, 51.5779305F,
      54.9728203F, 57.0323F, 57.6269302F, 57.1959801F, 53.7530708F, 52.2467918F,
      50.6192894F, 49.126091F, 47.9187088F, 46.6905F, 44.7241707F, 41.9129F,
      39.6623383F, 40.03F, 43.4514618F, 48.3972397F, 53.1817207F, 56.8117905F,
      58.7214F, 58.7770615F, 57.6783295F, 55.2478218F, 55.2797089F, 54.8312798F,
      53.8861389F, 52.6146812F, 50.9185F, 48.2532387F, 44.5917816F, 41.4765205F,
      41.2253418F, 44.4608383F, 49.5864716F, 54.6858215F, 58.4801292F,
      60.2103386F, 59.779541F, 58.1086884F, 56.6799F, 58.1193F, 58.677021F,
      58.0862198F, 56.5232391F, 54.1281395F, 50.6552887F, 46.2659798F,
      42.5672607F, 41.9474716F, 45.1312F, 50.4559784F, 55.7945595F, 59.6797485F,
      61.2728806F, 60.5214119F, 58.4570389F, 57.9907494F, 60.620491F, 61.934761F,
      61.4903412F, 59.4637718F, 56.1816101F, 51.7399406F, 46.6526489F,
      42.6542282F, 41.9919586F, 45.2595406F, 50.7410316F, 56.2129288F,
      60.1520195F, 61.737751F, 60.9253387F, 58.7026482F, 59.1301613F,
      62.6677208F, 64.4334793F, 63.9225388F, 61.3523102F, 57.19067F, 51.8279915F,
      46.1409798F, 41.9927711F, 41.3919106F, 44.6956406F, 50.1936607F,
      55.7020302F, 59.7392616F, 61.5330391F, 60.9662704F, 58.8369408F,
      60.0598106F, 64.1874237F, 66.0832214F, 65.3220062F, 62.250061F, 57.464241F,
      51.5262604F, 45.4629517F, 41.1138115F, 40.3063698F, 43.3432884F,
      48.6538582F, 54.1679916F, 58.4471092F, 60.7108498F, 60.6774483F,
      58.8635406F, 60.7546082F, 65.152771F, 66.8857117F, 65.7488708F,
      62.2935104F, 57.2024307F, 51.054039F, 44.818119F, 40.1843681F, 38.8794289F,
      41.3375702F, 46.2735786F, 51.8004303F, 56.4865112F, 59.4405594F,
      60.1399689F, 58.7971916F, 61.2030716F, 65.5802612F, 66.9189682F, 65.33918F,
      61.6124306F, 56.4158516F, 50.2304F, 43.9236908F, 39.0599213F, 37.2652206F,
      39.0765F, 43.5435905F, 49.0624886F, 54.2272186F, 57.9635391F, 59.4627113F,
      58.66F, 61.4053612F, 65.5193787F, 66.3063583F, 64.2539597F, 60.3182487F,
      55.1038704F, 48.9593887F, 42.6758194F, 37.7462082F, 35.6767807F, 36.9895F,
      41.008091F, 46.4677887F, 52.0577316F, 56.5215187F, 58.7569199F,
      58.4774513F, 61.3719597F, 65.0383682F, 65.1877213F, 62.6528397F, 58.52145F,
      53.3208618F, 47.3027496F, 41.19347F, 36.4136505F, 34.3309784F, 35.3677101F,
      39.0226517F, 44.3670082F, 50.2589111F, 55.2993202F, 58.1154785F,
      58.274559F, 61.119381F, 64.2127838F, 63.698391F, 60.6903191F, 56.3554802F,
      51.1674194F, 45.3414307F, 39.5673599F, 35.1857109F, 33.3773117F,
      34.3724213F, 37.75737F, 42.9317513F, 48.984169F, 54.4105301F, 57.6034317F,
      58.0721283F, 60.6688499F, 63.1136093F, 61.9571686F, 58.5107918F,
      53.9825211F, 48.8148804F, 43.2272797F, 37.9078407F, 34.1241F, 32.8304787F,
      33.9999084F, 37.2338F, 42.2268791F, 48.3138885F, 53.9158897F, 57.2580109F,
      57.8856F },

    { 129.47F, 85.74F, 47.95F, 31.19F, 22.49F, 16.95F, 13.27F, 11.01F, 9.8F,
      9.04F, 8.04F, 6.39F, 4.43F, 2.87F, 1.89F, 0.82F, -2.32F, 117.22F, 77.74F,
      46.6F, 31.43F, 23.03F, 17.45F, 13.54F, 10.99F, 9.62F, 9.1F, 8.9F, 8.5F,
      7.8F, 7.16F, 6.81F, 6.22F, 3.0F, 106.08F, 71.32F, 45.05F, 31.15F, 23.11F,
      17.66F, 13.69F, 10.92F, 9.35F, 8.9F, 9.28F, 10.0F, 10.63F, 11.06F, 11.42F,
      11.38F, 7.93F, 95.9F, 65.84F, 43.54F, 30.68F, 22.9F, 17.63F, 13.76F,
      10.96F, 9.35F, 9.04F, 9.84F, 11.3F, 12.87F, 14.23F, 15.37F, 15.95F, 11.92F,
      86.49F, 60.89F, 42.13F, 30.3F, 22.59F, 17.34F, 13.56F, 10.85F, 9.33F,
      9.23F, 10.36F, 12.23F, 14.3F, 16.32F, 18.23F, 19.43F, 14.1F, 77.66F,
      56.14F, 40.72F, 30.13F, 22.43F, 16.92F, 13.06F, 10.41F, 8.99F, 9.0F,
      10.29F, 12.32F, 14.56F, 16.91F, 19.4F, 21.05F, 12.85F, 69.27F, 51.34F,
      39.0F, 29.96F, 22.49F, 16.6F, 12.48F, 9.82F, 8.45F, 8.36F, 9.46F, 11.29F,
      13.35F, 15.59F, 18.13F, 19.48F, 5.26F, 61.17F, 46.27F, 36.55F, 29.27F,
      22.45F, 16.43F, 12.06F, 9.33F, 7.84F, 7.34F, 7.77F, 8.9F, 10.31F, 11.84F,
      13.4F, 12.7F, -11.34F, 53.29F, 40.83F, 33.06F, 27.34F, 21.49F, 15.73F,
      11.24F, 8.29F, 6.4F, 5.21F, 4.67F, 4.75F, 5.09F, 5.26F, 4.59F, -0.63F,
      -31.16F, 45.55F, 34.99F, 28.39F, 23.59F, 18.49F, 13.05F, 8.46F, 5.18F,
      2.88F, 1.11F, -0.23F, -1.16F, -1.98F, -3.4F, -6.84F, -16.66F, -43.36F,
      37.91F, 28.86F, 22.67F, 17.84F, 12.7F, 7.22F, 2.52F, -0.81F, -3.03F,
      -4.72F, -6.22F, -7.61F, -9.16F, -11.68F, -16.85F, -27.98F, -47.21F, 30.36F,
      22.59F, 16.3F, 10.57F, 4.49F, -1.41F, -5.93F, -8.65F, -10.05F, -10.91F,
      -11.73F, -12.73F, -14.24F, -17.04F, -22.55F, -32.64F, -46.06F, 22.85F,
      16.36F, 9.86F, 2.87F, -4.49F, -10.64F, -14.43F, -16.0F, -16.16F, -15.74F,
      -15.26F, -15.22F, -16.18F, -18.8F, -24.01F, -32.58F, -42.16F, 15.38F,
      10.3F, 3.93F, -3.97F, -12.12F, -17.93F, -20.64F, -20.9F, -19.68F, -17.83F,
      -16.01F, -14.96F, -15.38F, -17.74F, -22.51F, -29.71F, -36.69F, 7.89F,
      4.43F, -1.18F, -9.07F, -17.2F, -22.31F, -23.86F, -22.61F, -19.85F, -16.82F,
      -14.24F, -12.74F, -12.85F, -14.94F, -19.22F, -25.22F, -30.28F, 0.34F,
      -1.36F, -5.56F, -12.4F, -19.92F, -24.42F, -24.67F, -21.47F, -17.13F,
      -13.44F, -10.85F, -9.45F, -9.48F, -11.25F, -14.92F, -19.8F, -23.3F, -7.34F,
      -7.29F, -9.74F, -14.73F, -21.07F, -24.99F, -23.63F, -18.27F, -12.78F,
      -9.01F, -6.79F, -5.7F, -5.73F, -7.17F, -10.17F, -13.88F, -15.96F, -15.18F,
      -13.59F, -14.42F, -17.22F, -21.47F, -23.92F, -20.57F, -13.85F, -8.29F,
      -4.9F, -3.03F, -2.14F, -2.11F, -3.15F, -5.32F, -7.72F, -8.41F, -23.24F,
      -20.43F, -20.09F, -21.03F, -22.35F, -21.47F, -15.69F, -9.0F, -4.51F,
      -1.89F, -0.34F, 0.56F, 0.85F, 0.41F, -0.66F, -1.53F, -0.76F, -31.54F,
      -27.84F, -26.86F, -26.68F, -25.38F, -19.97F, -10.98F, -4.6F, -1.39F, 0.32F,
      1.46F, 2.34F, 2.98F, 3.34F, 3.68F, 4.58F, 6.88F, -40.09F, -35.71F, -34.41F,
      -33.68F, -30.76F, -21.75F, -9.14F, -1.8F, 1.02F, 2.21F, 2.96F, 3.69F,
      4.55F, 5.77F, 7.67F, 10.49F, 14.44F, -48.87F, -43.87F, -42.21F, -40.93F,
      -36.84F, -25.91F, -11.0F, -1.84F, 1.76F, 3.12F, 3.84F, 4.56F, 5.73F, 7.84F,
      11.32F, 16.05F, 21.81F, -57.89F, -52.13F, -49.75F, -47.46F, -41.94F,
      -29.96F, -14.7F, -4.45F, 0.26F, 2.27F, 3.37F, 4.49F, 6.31F, 9.49F, 14.47F,
      21.06F, 28.85F, -67.15F, -60.38F, -56.69F, -52.66F, -45.12F, -32.1F,
      -17.48F, -7.38F, -2.13F, 0.43F, 1.99F, 3.65F, 6.27F, 10.5F, 16.79F, 25.16F,
      35.38F, -76.67F, -68.54F, -62.8F, -56.15F, -45.85F, -31.52F, -17.81F,
      -8.68F, -3.64F, -0.95F, 0.82F, 2.78F, 5.83F, 10.64F, 17.76F, 27.79F, 41.1F,
      -86.5F, -76.64F, -67.97F, -57.6F, -43.82F, -28.28F, -15.84F, -8.22F,
      -3.99F, -1.57F, 0.15F, 2.08F, 5.0F, 9.61F, 16.78F, 28.09F, 45.46F, -96.72F,
      -84.8F, -72.09F, -56.58F, -38.84F, -22.85F, -12.25F, -6.45F, -3.43F,
      -1.68F, -0.33F, 1.23F, 3.52F, 7.14F, 13.25F, 24.77F, 47.46F, -107.43F,
      -93.29F, -74.93F, -52.32F, -30.96F, -15.92F, -7.54F, -3.57F, -1.91F,
      -1.19F, -0.66F, 0.08F, 1.24F, 3.18F, 6.99F, 16.58F, 45.09F, -118.77F,
      -102.54F, -75.92F, -43.75F, -21.13F, -8.92F, -3.01F, -0.67F, -0.2F, -0.56F,
      -1.08F, -1.49F, -1.78F, -1.87F, -1.04F, 4.2F, 34.68F, -130.89F, -113.42F,
      -73.34F, -30.29F, -11.32F, -3.43F, -0.14F, 0.78F, 0.36F, -0.75F, -2.13F,
      -3.61F, -5.23F, -7.04F, -8.63F, -7.88F, 14.29F, -143.9F, -127.72F, -61.4F,
      -13.68F, -2.91F, 0.49F, 1.41F, 1.11F, 0.07F, -1.5F, -3.46F, -5.71F, -8.23F,
      -10.97F, -13.69F, -15.41F, -5.73F, -157.84F, -149.27F, -20.81F, 2.05F,
      4.1F, 3.94F, 3.15F, 2.05F, 0.6F, -1.33F, -3.78F, -6.64F, -9.66F, -12.67F,
      -15.54F, -18.02F, -15.73F, -172.57F, 176.83F, 27.13F, 14.12F, 10.06F,
      7.49F, 5.65F, 4.14F, 2.52F, 0.36F, -2.48F, -5.76F, -9.04F, -12.0F, -14.61F,
      -17.11F, -18.04F, 172.29F, 138.71F, 43.23F, 22.28F, 14.98F, 10.9F, 8.33F,
      6.57F, 4.97F, 2.89F, 0.03F, -3.36F, -6.67F, -9.47F, -11.75F, -14.01F,
      -16.3F, 157.26F, 112.47F, 47.83F, 27.29F, 18.72F, 13.78F, 10.7F, 8.76F,
      7.31F, 5.59F, 3.08F, -0.08F, -3.24F, -5.8F, -7.71F, -9.63F, -12.48F,
      142.86F, 96.47F, 48.65F, 30.01F, 21.17F, 15.83F, 12.42F, 10.36F, 9.09F,
      7.87F, 6.01F, 3.41F, 0.63F, -1.55F, -3.04F, -4.57F, -7.62F, 129.47F,
      85.74F, 47.95F, 31.19F, 22.49F, 16.95F, 13.27F, 11.01F, 9.8F, 9.04F, 8.04F,
      6.39F, 4.43F, 2.87F, 1.89F, 0.82F, -2.32F },

    { -78.32F, -80.9F, -77.5F, -71.61F, -64.4F, -55.01F, -42.22F, -25.27F,
      -5.16F, 14.71F, 31.05F, 43.37F, 53.09F, 61.88F, 70.58F, 78.83F, 85.96F,
      -77.55F, -79.07F, -75.48F, -69.67F, -62.42F, -52.87F, -39.76F, -22.29F,
      -1.69F, 18.2F, 34.01F, 45.48F, 54.34F, 62.58F, 71.01F, 79.09F, 86.05F,
      -76.63F, -77.24F, -73.55F, -67.78F, -60.45F, -50.73F, -37.42F, -19.76F,
      0.89F, 20.62F, 36.14F, 47.27F, 55.81F, 63.74F, 71.88F, 79.66F, 86.28F,
      -75.6F, -75.39F, -71.65F, -65.94F, -58.48F, -48.51F, -34.98F, -17.28F,
      3.17F, 22.54F, 37.81F, 48.88F, 57.44F, 65.29F, 73.15F, 80.49F, 86.63F,
      -74.48F, -73.48F, -69.68F, -64.09F, -56.54F, -46.26F, -32.43F, -14.67F,
      5.55F, 24.56F, 39.59F, 50.65F, 59.31F, 67.16F, 74.71F, 81.53F, 87.09F,
      -73.33F, -71.51F, -67.54F, -62.1F, -54.59F, -44.09F, -29.96F, -12.08F,
      7.95F, 26.67F, 41.57F, 52.65F, 61.39F, 69.2F, 76.45F, 82.72F, 87.59F,
      -72.15F, -69.47F, -65.16F, -59.81F, -52.52F, -42.03F, -27.69F, -9.67F,
      10.22F, 28.72F, 43.56F, 54.72F, 63.52F, 71.25F, 78.19F, 83.92F, 88.06F,
      -71.0F, -67.41F, -62.55F, -57.1F, -50.07F, -39.77F, -25.28F, -7.0F, 12.83F,
      31.01F, 45.61F, 56.71F, 65.49F, 73.08F, 79.73F, 84.97F, 88.31F, -69.9F,
      -65.44F, -59.86F, -54.05F, -47.07F, -36.82F, -22.02F, -3.36F, 16.26F,
      33.68F, 47.59F, 58.35F, 66.97F, 74.37F, 80.75F, 85.57F, 88.18F, -68.89F,
      -63.66F, -57.37F, -51.04F, -43.81F, -33.3F, -18.06F, 0.72F, 19.64F, 35.87F,
      48.8F, 59.05F, 67.48F, 74.74F, 80.91F, 85.44F, 87.69F, -67.99F, -62.2F,
      -55.46F, -48.77F, -41.31F, -30.64F, -15.4F, 2.91F, 20.92F, 36.17F, 48.37F,
      58.27F, 66.65F, 73.95F, 80.13F, 84.62F, 87.02F, -67.22F, -61.13F, -54.42F,
      -47.99F, -40.97F, -30.96F, -16.69F, 0.68F, 18.26F, 33.51F, 45.81F, 55.91F,
      64.62F, 72.25F, 78.7F, 83.45F, 86.29F, -66.58F, -60.48F, -54.37F, -49.08F,
      -43.5F, -35.21F, -22.85F, -6.71F, 11.04F, 27.46F, 41.11F, 52.35F, 61.92F,
      70.16F, 77.03F, 82.19F, 85.57F, -66.09F, -60.18F, -55.14F, -51.69F,
      -48.17F, -42.02F, -31.99F, -17.58F, 0.23F, 18.6F, 34.89F, 48.29F, 59.19F,
      68.16F, 75.46F, 81.01F, 84.92F, -65.73F, -60.1F, -56.32F, -54.93F, -53.46F,
      -49.2F, -41.34F, -28.93F, -11.51F, 8.9F, 28.43F, 44.48F, 56.9F, 66.57F,
      74.18F, 80.01F, 84.34F, -65.49F, -60.13F, -57.45F, -57.9F, -58.26F,
      -55.54F, -49.29F, -38.3F, -21.14F, 0.89F, 23.14F, 41.5F, 55.25F, 65.48F,
      73.27F, 79.23F, 83.87F, -65.38F, -60.19F, -58.21F, -60.03F, -62.1F,
      -60.84F, -55.5F, -44.75F, -27.11F, -3.9F, 19.99F, 39.77F, 54.36F, 64.92F,
      72.74F, 78.68F, 83.51F, -65.4F, -60.26F, -58.51F, -61.05F, -64.69F, -65.0F,
      -60.06F, -48.52F, -29.72F, -5.46F, 19.21F, 39.46F, 54.29F, 64.87F, 72.54F,
      78.36F, 83.27F, -65.55F, -60.4F, -58.47F, -60.96F, -65.61F, -67.43F,
      -62.7F, -50.16F, -30.15F, -5.02F, 19.99F, 40.22F, 54.89F, 65.22F, 72.61F,
      78.24F, 83.16F, -65.86F, -60.73F, -58.41F, -60.14F, -64.77F, -67.53F,
      -63.05F, -49.9F, -29.26F, -3.73F, 21.35F, 41.4F, 55.79F, 65.79F, 72.87F,
      78.31F, 83.18F, -66.34F, -61.34F, -58.67F, -59.33F, -62.86F, -65.5F,
      -61.08F, -47.67F, -26.83F, -1.44F, 23.2F, 42.79F, 56.77F, 66.43F, 73.25F,
      78.54F, 83.33F, -66.99F, -62.33F, -59.55F, -59.31F, -61.25F, -62.6F,
      -57.62F, -43.83F, -22.82F, 2.14F, 25.82F, 44.47F, 57.81F, 67.08F, 73.72F,
      78.94F, 83.6F, -67.82F, -63.72F, -61.17F, -60.51F, -61.11F, -60.61F,
      -54.38F, -40.02F, -18.78F, 5.77F, 28.45F, 46.12F, 58.78F, 67.74F, 74.32F,
      79.52F, 84.01F, -68.81F, -65.51F, -63.47F, -62.83F, -62.64F, -60.52F,
      -52.91F, -37.98F, -16.6F, 7.73F, 29.92F, 47.11F, 59.5F, 68.4F, 75.07F,
      80.3F, 84.53F, -69.94F, -67.63F, -66.3F, -65.89F, -65.24F, -61.9F, -53.14F,
      -37.71F, -16.24F, 8.09F, 30.23F, 47.43F, 59.94F, 69.06F, 75.97F, 81.24F,
      85.17F, -71.18F, -70.02F, -69.47F, -69.27F, -68.13F, -63.74F, -54.06F,
      -38.24F, -16.65F, 7.8F, 30.09F, 47.47F, 60.26F, 69.75F, 76.97F, 82.31F,
      85.89F, -72.49F, -72.58F, -72.82F, -72.64F, -70.71F, -65.25F, -54.9F,
      -38.94F, -17.39F, 7.2F, 29.79F, 47.46F, 60.56F, 70.39F, 77.91F, 83.36F,
      86.66F, -73.83F, -75.23F, -76.23F, -75.74F, -72.59F, -65.94F, -55.04F,
      -39.1F, -17.82F, 6.68F, 29.47F, 47.41F, 60.75F, 70.81F, 78.54F, 84.18F,
      87.41F, -75.13F, -77.9F, -79.6F, -78.31F, -73.53F, -65.61F, -54.07F,
      -38.04F, -17.09F, 6.93F, 29.43F, 47.3F, 60.67F, 70.78F, 78.6F, 84.47F,
      88.02F, -76.35F, -80.5F, -82.82F, -80.03F, -73.57F, -64.6F, -52.51F,
      -36.34F, -15.72F, 7.55F, 29.35F, 46.86F, 60.07F, 70.09F, 77.94F, 84.07F,
      88.29F, -77.43F, -82.9F, -85.67F, -80.66F, -73.05F, -63.59F, -51.36F,
      -35.4F, -15.35F, 7.17F, 28.41F, 45.63F, 58.71F, 68.71F, 76.67F, 83.16F,
      88.09F, -78.29F, -84.9F, -87.34F, -80.24F, -72.25F, -62.79F, -50.82F,
      -35.38F, -16.06F, 5.75F, 26.58F, 43.66F, 56.74F, 66.84F, 75.07F, 82.03F,
      87.62F, -78.89F, -86.01F, -86.37F, -79.08F, -71.21F, -61.92F, -50.17F,
      -35.06F, -16.31F, 4.76F, 24.95F, 41.67F, 54.66F, 64.91F, 73.47F, 80.91F,
      87.09F, -79.19F, -85.72F, -84.19F, -77.47F, -69.88F, -60.72F, -48.95F,
      -33.78F, -15.19F, 5.23F, 24.48F, 40.43F, 53.04F, 63.27F, 72.11F, 79.96F,
      86.61F, -79.18F, -84.41F, -81.87F, -75.59F, -68.24F, -59.11F, -47.14F,
      -31.59F, -12.77F, 7.24F, 25.46F, 40.34F, 52.22F, 62.19F, 71.14F, 79.28F,
      86.25F, -78.87F, -82.7F, -79.63F, -73.61F, -66.37F, -57.15F, -44.8F,
      -28.6F, -9.2F, 10.64F, 27.84F, 41.43F, 52.28F, 61.73F, 70.62F, 78.89F,
      86.03F, -78.32F, -80.9F, -77.5F, -71.61F, -64.4F, -55.01F, -42.22F,
      -25.27F, -5.16F, 14.71F, 31.05F, 43.37F, 53.09F, 61.88F, 70.58F, 78.83F,
      85.96F }
  },
  10.0,
  1000,
  98.055F,
  -98.055F,
  3.14159274F,
  0.15F,
  3.14159274F,
  1.0F,
  0.01F,
  0.2F,
  38.3972435F,
  -38.3972435F,
  9.3055F,
  30000.0F,
  -30000.0F,
  20.0F,
  110000.0F,
  70.0F,
  20.0F,
  0.0F,
  30000.0F,
  -20.0F,
  -20.0F,
  1000.0F,
  100.0F,
  1000.0F,
  1000.0F,
  1000.0F,
  200.0F,
  100.0F,
  1000.0F,
  1000.0F,
  1000.0F,
  1000.0F,
  100.0F,
  10.3055F,
  1U,
  2U,
  8U,
  10000U,
  50U,
  200U,
  500U,
  5000U,
  20U,
  1U,
  200U,
  500U,
  100U,
  1000U,
  100U,
  100U,
  200U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0U,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  3U,
  0U,
  2U,
  2U,
  90U,
  50U,
  0U,
  1.0E+8,
  1.0E-6,
  1.0,
  0.0,
  0.0,
  0.0,
  0.0,
  0.0,
  1.0,
  1.0,
  1.0,
  1.0,
  1.0,
  2.0,
  6.378137E+6,
  0.0033528106647474805,
  0,
  10000,
  0,

  { 8, 18 },

  { 16, 36 },
  0,
  1099511628,
  1099511628,
  1099511628,
  1099511628,
  2012227627,
  2012227627,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  2.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  0.3F,
  0.2F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  0.0F,
  0.0F,
  2.0F,
  1.0F,
  -1.0F,
  1.0F,
  1.0F,
  -1.0F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  -1.0F,
  1.0F,
  1.0F,
  0.0F,
  0.002F,
  0.0F,
  0.002F,
  20.0F,
  100.0F,
  6.28318548F,
  6.28318548F,
  0.0F,
  0.002F,
  0.2F,
  0.1F,
  1.0F,
  0.0F,
  0.0F,

  { 0.0F, 0.0F, -9.8055F },
  0.0F,
  0.0F,
  -0.2F,
  0.2F,
  0.5F,
  -0.5F,
  0.0F,
  0.0F,
  0.17453292F,
  1.57079637F,
  -1.57079637F,
  0.0001F,

  { 0.2F, 0.2F, 0.0F },
  0.002F,
  0.0F,
  3947.8418F,
  88.8442383F,
  0.0F,

  { 0.0F, 0.0F, 1.0F },
  0.0F,
  0.002F,
  -1.0F,
  0.0F,
  0.0F,
  0.3F,
  0.2F,
  1.0F,
  0.0F,

  { 0.0F, 0.0F, 0.3F },
  0.002F,
  0.0F,
  986.960449F,
  44.4221191F,

  { 0.0F, 0.0F, 1.0F },
  0.0F,
  0.002F,
  0.00174532924F,
  -0.00174532924F,
  0.002F,
  0.0F,
  986.960449F,
  44.4221191F,
  0.0F,
  0.002F,
  0.002F,
  0.0F,
  0.785398185F,
  -0.785398185F,
  0.5F,
  2.0F,
  2.0F,
  2.0F,
  2.0F,
  2.0F,
  2.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  1.0F,
  0.5F,
  2.0F,

  { 0.0F, 1.0F },
  0.5F,
  1.0F,
  0.5F,
  1.0F,
  1.0F,
  1.0F,

  { 0.0F, 1.0F },
  0.5F,
  1.0F,
  0.5F,
  1.0F,
  1.0F,
  1.0F,

  { 0.0F, 1.0F },
  0.5F,
  1.0F,
  0.5F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,

  { 1.0F, 0.0F, 0.0F, 0.0F },
  -1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.002F,
  4.0F,
  0.002F,
  2.0F,
  1.0F,
  0.0F,
  0.002F,
  20.0F,
  0.01F,
  0.003F,
  0.0F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.002F,
  0.0F,

  { 0.0F, 0.0F },
  0.0F,
  0.002F,

  { 0.0F, 0.0F },
  0.0F,
  0.0F,
  0.002F,

  { 0.0F, 0.0F },
  0.0F,
  1.0F,
  -1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.002F,
  0.5F,
  -0.5F,
  1.0F,
  -1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.002F,
  0.0F,
  0.0F,
  0.0F,
  0.002F,
  1.0F,
  -1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  0.002F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  -1.0F,
  0.0F,
  0.002F,
  0.0F,
  0.0F,

  { 0.0F, 0.0F },
  0.002F,
  0.7F,
  0.4F,
  1.0F,
  0.0F,
  0.7F,
  0.6F,
  1.0F,
  0.0F,
  0.0F,
  0.002F,
  0.0F,
  0.002F,
  986.960449F,
  44.4221191F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  1.0F,
  0.0F,
  1.0E+6F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  1.225F,
  2.0F,
  999.0F,
  0.1F,
  0.0F,
  0.0F,
  0.001F,
  101.325F,
  0.1902612F,
  288.15F,
  -0.0065F,
  -1.0F,
  0.0F,
  -1.0F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  -1.0F,
  0.0F,
  1.0F,
  0.0F,
  0.002F,
  0.0F,
  1.0F,
  0.0F,
  0.002F,
  0.002F,
  0.0F,
  39.4784164F,
  8.88442421F,
  0.002F,
  0.0F,
  39.4784164F,
  8.88442421F,
  0.5F,
  1.0F,
  0.0F,
  1.0F,
  1.0F,
  0.0F,
  0.0F,
  0.0F,
  -0.0174532924F,
  -1.0F,
  0.0F,
  100.0F,
  0.0174532924F,
  1.0F,
  2.0F,
  1.0F,
  0.0F,
  1.0F,
  1.0F,
  1.0F,
  1.0F,
  0.0F,
  0.0F,
  0.002F,
  0.0F,
  0.002F,
  986.960449F,
  44.4221191F,
  0.002F,
  188.49556F,
  0.0F,
  0.0F,
  0.0F,
  0.0F,
  2147483648U,
  2147483648U,
  2199023256U,
  2199023256U,
  0U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  0U,
  1U,
  1U,
  0U,
  4294967295U,
  0U,
  1U,
  1U,
  1U,
  1U,
  1U,
  0U,
  10000U,
  0U,
  1U,
  0U,
  1U,
  0U,
  0U,
  25U,
  25U,
  1U,
  75U,
  75U,
  50U,
  50U,
  3U,
  3U,
  1U,
  5U,
  1U,
  1U,
  25U,
  1U,
  75U,
  50U,
  3U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  1U,
  0U,
  10000U,
  1U,
  0U,
  1U,
  1U,
  0U,
  10000U,
  0U,
  1U,
  1U,
  0U,
  1U,
  1U,
  0U,
  0U,
  1U,
  0U,
  1U,
  0U,
  1U,
  0U,
  1U,
  0U,
  9999U,
  0U,
  1U,
  1U,
  1U,
  1U,
  1U,
  32768U,
  32768U,
  32768U,
  32768U,
  32768U,
  32768U,
  32768U,
  100U,
  0U,
  0U,
  0U,
  0U,
  0,
  0,
  1,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  1,
  0,
  0,
  1,
  0,
  0,
  0,
  1,
  0,
  0,
  1,
  0,
  0,
  1,
  0,
  0,
  0,
  128U,
  128U,
  128U,
  128U,
  128U,
  1U,
  0U,
  1U,
  1U,
  1U,
  0U,
  0U,
  0U,
  1U,
  0U,
  1U,
  0U,
  1U,
  0U,
  0U,
  1U,
  0U,

  /* Start of '<S281>/Rf_Velocity' */
  {
    0.0F
  }
  ,

  /* End of '<S281>/Rf_Velocity' */

  /* Start of '<S281>/Baro_Velocity' */
  {
    0.0F
  }
  /* End of '<S281>/Baro_Velocity' */
};

/* Block signals (default storage) */
BlockIO_INS_T INS_B;

/* Block states (default storage) */
D_Work_INS_T INS_DWork;

/* Previous zero-crossings (trigger) states */
PrevZCSigStates_INS_T INS_PrevZCSigState;

/* External inputs (root inport signals with default storage) */
ExternalInputs_INS_T INS_U;

/* External outputs (root outports fed by signals with default storage) */
ExternalOutputs_INS_T INS_Y;

/* Real-time model */
RT_MODEL_INS_T INS_M_;
RT_MODEL_INS_T *const INS_M = &INS_M_;
static void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo);
static uint32_T mul_u32_loSR(uint32_T a, uint32_T b, uint32_T aShift);
static void INS_Baro_Velocity(boolean_T rtu_TF_Data, real32_T *rty_vel_D_mPs,
  rtP_Baro_Velocity_INS_T *localP);
static void mul_wide_u32(uint32_T in0, uint32_T in1, uint32_T *ptrOutBitsHi,
  uint32_T *ptrOutBitsLo)
{
  uint32_T outBitsLo;
  uint32_T in0Lo;
  uint32_T in0Hi;
  uint32_T in1Lo;
  uint32_T in1Hi;
  uint32_T productHiLo;
  uint32_T productLoHi;
  in0Hi = in0 >> 16U;
  in0Lo = in0 & 65535U;
  in1Hi = in1 >> 16U;
  in1Lo = in1 & 65535U;
  productHiLo = in0Hi * in1Lo;
  productLoHi = in0Lo * in1Hi;
  in0Lo *= in1Lo;
  in1Lo = 0U;
  outBitsLo = (productLoHi << 16U) + in0Lo;
  if (outBitsLo < in0Lo) {
    in1Lo = 1U;
  }

  in0Lo = outBitsLo;
  outBitsLo += productHiLo << 16U;
  if (outBitsLo < in0Lo) {
    in1Lo++;
  }

  *ptrOutBitsHi = (((productLoHi >> 16U) + (productHiLo >> 16U)) + in0Hi * in1Hi)
    + in1Lo;
  *ptrOutBitsLo = outBitsLo;
}

static uint32_T mul_u32_loSR(uint32_T a, uint32_T b, uint32_T aShift)
{
  uint32_T result;
  uint32_T u32_chi;
  mul_wide_u32(a, b, &u32_chi, &result);
  return u32_chi << (32U - aShift) | result >> aShift;
}

/*
 * Output and update for enable system:
 *    '<S281>/Baro_Velocity'
 *    '<S281>/Rf_Velocity'
 */
static void INS_Baro_Velocity(boolean_T rtu_TF_Data, real32_T *rty_vel_D_mPs,
  rtP_Baro_Velocity_INS_T *localP)
{
  /* Outputs for Enabled SubSystem: '<S281>/Baro_Velocity' incorporates:
   *  EnablePort: '<S285>/Enable'
   */
  if (rtu_TF_Data) {
    /* SignalConversion: '<S285>/OutportBuffer_InsertedFor_vel_D_mPs_at_inport_0' incorporates:
     *  Constant: '<S285>/Constant'
     */
    *rty_vel_D_mPs = localP->Constant_Value;
  }

  /* End of Outputs for SubSystem: '<S281>/Baro_Velocity' */
}

/* Model step function */
void INS_step(void)
{
  real32_T rtb_DiscreteTimeIntegrator_g;
  real32_T rtb_DiscreteTimeIntegrator_eh;
  real32_T rtb_Divide1;
  boolean_T rtb_WGS84_pos_valid;
  boolean_T rtb_FixPtRelationalOperator_cn;
  uint8_T rtb_Switch_pt;
  uint32_T rtb_Sum1;
  boolean_T rtb_FixPtRelationalOperator_nc;
  uint8_T rtb_Switch_ox;
  boolean_T rtb_LogicalOperator2_g;
  uint8_T rtb_Switch_bx;
  real32_T rtb_M_OC[9];
  boolean_T rtb_LogicalOperator3;
  boolean_T rtb_LogicalOperator5;
  boolean_T rtb_Compare_c5;
  boolean_T rtb_Compare_cio;
  real32_T rtb_Gain2_a;
  real_T rtb_Scalefactor1;
  real_T rtb_Scalefactor2;
  real_T rtb_Scalefactor3;
  real32_T rtb_Product_d4;
  real32_T rtb_Saturation_a;
  real32_T rtb_Product2;
  real32_T rtb_VectorConcatenate[3];
  real32_T rtb_VectorConcatenate1[3];
  boolean_T rtb_Compare_ai;
  boolean_T rtb_Switch_ol;
  boolean_T rtb_Compare_o;
  boolean_T rtb_Compare_jx;
  int8_T rtb_DataTypeConversion1_m;
  int8_T rtb_DataTypeConversion_b;
  int8_T rtb_DataTypeConversion2_h;
  boolean_T rtb_Compare_jc;
  real32_T rtb_Sum2_m;
  real32_T rtb_Multiply_hs[3];
  boolean_T rtb_Compare_j;
  boolean_T rtb_Compare_bx;
  boolean_T rtb_LogicalOperator1_cc;
  uint16_T rtb_Multiply_jy;
  boolean_T rtb_Compare_en;
  boolean_T rtb_FixPtRelationalOperator_p;
  boolean_T rtb_Compare_gku;
  boolean_T rtb_LogicalOperator1_ao;
  uint16_T rtb_Multiply_o;
  boolean_T rtb_Compare_mx;
  boolean_T rtb_FixPtRelationalOperator_fr;
  boolean_T rtb_Compare_if;
  boolean_T rtb_Compare_ng;
  boolean_T rtb_LogicalOperator1_ng;
  uint16_T rtb_Multiply_cb;
  boolean_T rtb_Compare_cd;
  boolean_T rtb_Compare_ah;
  boolean_T rtb_LogicalOperator1_nd;
  boolean_T rtb_Compare_d3;
  boolean_T rtb_Compare_a2;
  boolean_T rtb_LogicalOperator1_f1;
  uint16_T rtb_Multiply_gs;
  boolean_T rtb_Compare_e0;
  boolean_T rtb_Compare_g;
  real_T rtb_DataTypeConversion2;
  real32_T rtb_Switch_ot0[6];
  real_T rtb_DataTypeConversion1;
  uint32_T rtb_Sum1_o;
  real32_T rtb_Sum2_by;
  real_T rtb_ff;
  real32_T rtb_Gain_ok[3];
  real32_T rtb_Multiply2;
  boolean_T rtb_Compare_cy;
  real32_T rtb_VectorConcatenate_er[9];
  real32_T rtb_Sum_g0[6];
  real32_T rtb_VectorConcatenate_h[9];
  real32_T rtb_dec_rad;
  real32_T rtb_MathFunction1;
  real32_T rtb_Gauss_to_uT[3];
  real32_T rtb_MathFunction[3];
  real32_T rtb_M_OC_0[9];
  real32_T tmp[6];
  real32_T rtb_Gain_b;
  real32_T rtb_Gain_gz_idx_0;
  real32_T rtb_Gain_gz_idx_1;
  real32_T rtb_Gain_gz_idx_2;
  real_T rtb_Switch4_c_idx_0;
  real_T rtb_Switch4_c_idx_1;
  real32_T rtb_Switch_kj_idx_3;
  int32_T rtb_Saturation1_j_idx_0;
  int32_T rtb_Saturation1_j_idx_1;
  real32_T rtb_Abs_h_idx_0;
  real32_T rtb_Sum_gn_idx_1;
  real32_T rtb_Sum_gn_idx_2;
  real32_T rtb_Sum_gn_idx_0;
  real32_T rtb_MathFunction_e_idx_1;
  real32_T rtb_MathFunction_e_idx_2;
  real32_T rtb_Sum_p_idx_0;
  real32_T rtb_Sum_p_idx_1;
  real32_T rtb_ba_mPs2_idx_0;
  real32_T rtb_ba_mPs2_idx_2;
  real32_T rtb_Switch_kj_idx_2;
  real32_T rtb_Memory_m_idx_0;
  real32_T rtb_Memory_m_idx_1;
  int8_T u0;
  uint32_T qY;
  int32_T rtb_Saturation1_j_idx_1_0;
  int32_T rtb_Saturation1_j_idx_0_0;
  real32_T rtb_M_OC_tmp;
  real32_T rtb_M_OC_tmp_0;

  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/Baro_PreProcess' */
  /* Product: '<S374>/Divide' incorporates:
   *  Constant: '<S374>/p1'
   *  Gain: '<S374>/Gain1'
   *  Inport: '<Root>/Barometer'
   */
  rtb_DiscreteTimeIntegrator_g = INS_P.Gain1_Gain_a * INS_U.Barometer.pressure /
    INS_P.p1_Value;

  /* Math: '<S374>/Power' incorporates:
   *  Constant: '<S374>/aR_g'
   */
  if ((rtb_DiscreteTimeIntegrator_g < 0.0F) && (INS_P.aR_g_Value > floorf
       (INS_P.aR_g_Value))) {
    rtb_DiscreteTimeIntegrator_g = -powf(-rtb_DiscreteTimeIntegrator_g,
      INS_P.aR_g_Value);
  } else {
    rtb_DiscreteTimeIntegrator_g = powf(rtb_DiscreteTimeIntegrator_g,
      INS_P.aR_g_Value);
  }

  /* End of Math: '<S374>/Power' */

  /* Product: '<S374>/Divide1' incorporates:
   *  Constant: '<S374>/T1'
   *  Constant: '<S374>/a'
   *  Product: '<S374>/Multiply'
   *  Sum: '<S374>/Subtract'
   */
  rtb_Divide1 = (rtb_DiscreteTimeIntegrator_g * INS_P.T1_Value - INS_P.T1_Value)
    / INS_P.a_Value;

  /* DiscreteIntegrator: '<S376>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S384>/Constant1'
   *  Delay: '<S384>/Delay'
   *  Inport: '<Root>/Barometer'
   *  RelationalOperator: '<S383>/FixPt Relational Operator'
   *  Switch: '<S384>/Switch'
   *  UnitDelay: '<S383>/Delay Input1'
   */
  if (INS_U.Barometer.timestamp != INS_DWork.DelayInput1_DSTATE_c) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nm =
      INS_P.DiscreteTimeIntegrator_IC_iu;
    rtb_Switch_pt = INS_P.Constant1_Value_b;
  } else {
    rtb_Switch_pt = INS_DWork.Delay_DSTATE_i1;
  }

  /* Logic: '<S376>/Logical Operator1' incorporates:
   *  Constant: '<S382>/Constant'
   *  Constant: '<S385>/Lower Limit'
   *  Constant: '<S385>/Upper Limit'
   *  Constant: '<S386>/Lower Limit'
   *  Constant: '<S386>/Upper Limit'
   *  DiscreteIntegrator: '<S376>/Discrete-Time Integrator'
   *  Inport: '<Root>/Barometer'
   *  Logic: '<S376>/Logical Operator'
   *  Logic: '<S385>/AND'
   *  Logic: '<S386>/AND'
   *  RelationalOperator: '<S382>/Compare'
   *  RelationalOperator: '<S385>/Lower Test'
   *  RelationalOperator: '<S385>/Upper Test'
   *  RelationalOperator: '<S386>/Lower Test'
   *  RelationalOperator: '<S386>/Upper Test'
   */
  rtb_WGS84_pos_valid = ((INS_P.Sensor_Valid_min_pressure <
    INS_U.Barometer.pressure) && (INS_U.Barometer.pressure <
    INS_P.Sensor_Valid_max_pressure) && ((INS_P.Sensor_Valid_min_temp <
    INS_U.Barometer.temperature) && (INS_U.Barometer.temperature <
    INS_P.Sensor_Valid_max_temp)) && (INS_DWork.DiscreteTimeIntegrator_DSTAT_nm <
    INS_P.Sensor_Valid_timeout) && (rtb_Switch_pt != 0));

  /* Sum: '<S378>/Sum1' incorporates:
   *  Inport: '<Root>/Barometer'
   *  Logic: '<S378>/Logical Operator5'
   *  RelationalOperator: '<S380>/FixPt Relational Operator'
   *  UnitDelay: '<S380>/Delay Input1'
   */
  rtb_Saturation1_j_idx_0 = ((INS_U.Barometer.timestamp !=
    INS_DWork.DelayInput1_DSTATE_g) && rtb_WGS84_pos_valid);

  /* Saturate: '<S378>/Saturation' incorporates:
   *  Delay: '<S378>/Delay'
   */
  if (INS_DWork.Delay_DSTATE_f > INS_P.Saturation_UpperSat_f) {
    rtb_Sum1 = INS_P.Saturation_UpperSat_f;
  } else if (INS_DWork.Delay_DSTATE_f < INS_P.Saturation_LowerSat_pw) {
    rtb_Sum1 = INS_P.Saturation_LowerSat_pw;
  } else {
    rtb_Sum1 = INS_DWork.Delay_DSTATE_f;
  }

  /* End of Saturate: '<S378>/Saturation' */

  /* Sum: '<S378>/Sum1' */
  rtb_Sum1 += rtb_Saturation1_j_idx_0;
  if (rtb_Sum1 < (uint32_T)rtb_Saturation1_j_idx_0) {
    rtb_Sum1 = MAX_uint32_T;
  }

  /* Logic: '<S375>/Logical Operator' incorporates:
   *  Constant: '<S379>/Constant'
   *  RelationalOperator: '<S379>/Compare'
   *  Sum: '<S378>/Sum1'
   */
  rtb_FixPtRelationalOperator_cn = ((rtb_Sum1 > INS_P.CompareToConstant_const_nb)
    && rtb_WGS84_pos_valid);

  /* Outputs for Enabled SubSystem: '<S375>/Reference_Height' incorporates:
   *  EnablePort: '<S377>/Enable'
   */
  /* Logic: '<S381>/AND' incorporates:
   *  Constant: '<S381>/Lower Limit'
   *  Constant: '<S381>/Upper Limit'
   *  RelationalOperator: '<S381>/Lower Test'
   *  RelationalOperator: '<S381>/Upper Test'
   *  Sum: '<S378>/Sum1'
   */
  if ((INS_P.IntervalTest3_lowlimit < rtb_Sum1) && (rtb_Sum1 <
       INS_P.IntervalTest3_uplimit)) {
    if (!INS_DWork.Reference_Height_MODE) {
      /* InitializeConditions for Delay: '<S377>/Delay' */
      INS_DWork.Delay_DSTATE_d = INS_P.Delay_InitialCondition_p;

      /* InitializeConditions for Delay: '<S377>/Delay1' */
      INS_DWork.Delay1_DSTATE_i = INS_P.Delay1_InitialCondition_k;
      INS_DWork.Reference_Height_MODE = true;
    }

    /* Sum: '<S377>/Sum2' incorporates:
     *  Delay: '<S377>/Delay'
     */
    rtb_Sum2_by = rtb_Divide1 + INS_DWork.Delay_DSTATE_d;

    /* Sum: '<S377>/Sum1' incorporates:
     *  Constant: '<S377>/Constant1'
     *  Delay: '<S377>/Delay1'
     */
    rtb_Sum1_o = INS_P.Constant1_Value_f + INS_DWork.Delay1_DSTATE_i;
    if (rtb_Sum1_o < INS_P.Constant1_Value_f) {
      rtb_Sum1_o = MAX_uint32_T;
    }

    /* Saturate: '<S377>/Saturation1' incorporates:
     *  Sum: '<S377>/Sum1'
     */
    if (rtb_Sum1_o > INS_P.Saturation1_UpperSat_n) {
      qY = INS_P.Saturation1_UpperSat_n;
    } else if (rtb_Sum1_o < INS_P.Saturation1_LowerSat_m) {
      qY = INS_P.Saturation1_LowerSat_m;
    } else {
      qY = rtb_Sum1_o;
    }

    /* End of Saturate: '<S377>/Saturation1' */

    /* Product: '<S377>/Divide' */
    INS_B.Divide = rtb_Sum2_by / (real32_T)qY;

    /* Update for Delay: '<S377>/Delay' */
    INS_DWork.Delay_DSTATE_d = rtb_Sum2_by;

    /* Update for Delay: '<S377>/Delay1' incorporates:
     *  Sum: '<S377>/Sum1'
     */
    INS_DWork.Delay1_DSTATE_i = rtb_Sum1_o;
  } else {
    if (INS_DWork.Reference_Height_MODE) {
      INS_DWork.Reference_Height_MODE = false;
    }
  }

  /* End of Logic: '<S381>/AND' */
  /* End of Outputs for SubSystem: '<S375>/Reference_Height' */

  /* Switch: '<S375>/Switch' */
  if (rtb_FixPtRelationalOperator_cn) {
    rtb_Sum2_by = INS_B.Divide;
  } else {
    rtb_Sum2_by = rtb_Divide1;
  }

  /* End of Switch: '<S375>/Switch' */

  /* Sum: '<S375>/Sum2' */
  rtb_Sum2_m = rtb_Divide1 - rtb_Sum2_by;

  /* Update for UnitDelay: '<S380>/Delay Input1' incorporates:
   *  Inport: '<Root>/Barometer'
   */
  INS_DWork.DelayInput1_DSTATE_g = INS_U.Barometer.timestamp;

  /* Update for UnitDelay: '<S383>/Delay Input1' incorporates:
   *  Inport: '<Root>/Barometer'
   */
  INS_DWork.DelayInput1_DSTATE_c = INS_U.Barometer.timestamp;

  /* Update for DiscreteIntegrator: '<S376>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S376>/Constant'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTAT_nm +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nm = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nm = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S376>/Discrete-Time Integrator' */

  /* Update for Delay: '<S384>/Delay' */
  INS_DWork.Delay_DSTATE_i1 = rtb_Switch_pt;

  /* Update for Delay: '<S378>/Delay' incorporates:
   *  Sum: '<S378>/Sum1'
   */
  INS_DWork.Delay_DSTATE_f = rtb_Sum1;

  /* End of Outputs for SubSystem: '<S3>/Baro_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S3>/ExternalPos_Process' */
  /* Switch: '<S390>/Switch' incorporates:
   *  Constant: '<S390>/Constant1'
   *  Delay: '<Root>/Delay'
   *  Delay: '<S390>/Delay'
   */
  if (INS_DWork.Delay_1_DSTATE) {
    rtb_Switch_pt = INS_P.Constant1_Value_m;
  } else {
    rtb_Switch_pt = INS_DWork.Delay_DSTATE_e;
  }

  /* End of Switch: '<S390>/Switch' */

  /* DiscreteIntegrator: '<S389>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S398>/Constant1'
   *  Delay: '<S398>/Delay'
   *  Inport: '<Root>/External_Pos'
   *  RelationalOperator: '<S397>/FixPt Relational Operator'
   *  Switch: '<S398>/Switch'
   *  UnitDelay: '<S397>/Delay Input1'
   */
  if (INS_U.External_Pos.timestamp != INS_DWork.DelayInput1_DSTATE_b) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nj =
      INS_P.DiscreteTimeIntegrator_IC_jj;
    rtb_Switch_ox = INS_P.Constant1_Value_ns;
  } else {
    rtb_Switch_ox = INS_DWork.Delay_DSTATE_g;
  }

  /* Logic: '<S389>/Logical Operator1' incorporates:
   *  Constant: '<S396>/Constant'
   *  DiscreteIntegrator: '<S389>/Discrete-Time Integrator'
   *  RelationalOperator: '<S396>/Compare'
   */
  rtb_WGS84_pos_valid = ((INS_DWork.DiscreteTimeIntegrator_DSTAT_nj <
    INS_P.Sensor_Valid_timeout_e) && (rtb_Switch_ox != 0));

  /* Logic: '<S389>/Logical Operator2' incorporates:
   *  Inport: '<Root>/External_Pos'
   *  S-Function (sfix_bitop): '<S389>/xy valid'
   */
  rtb_LogicalOperator2_g = (rtb_WGS84_pos_valid &&
    ((INS_U.External_Pos.field_valid & INS_P.xyvalid_BitMask) != 0U));

  /* Switch: '<S393>/Switch' incorporates:
   *  Constant: '<S393>/Constant1'
   *  Delay: '<S393>/Delay'
   *  Logic: '<S391>/Logical Operator'
   */
  if (rtb_LogicalOperator2_g && (rtb_Switch_pt != 0)) {
    rtb_Switch_bx = INS_P.Constant1_Value_cs;
  } else {
    rtb_Switch_bx = INS_DWork.Delay_DSTATE_gj;
  }

  /* End of Switch: '<S393>/Switch' */

  /* Switch: '<S391>/Switch' incorporates:
   *  Delay: '<Root>/Delay'
   *  Delay: '<S391>/Delay'
   *  RelationalOperator: '<S392>/FixPt Relational Operator'
   *  UnitDelay: '<S392>/Delay Input1'
   */
  if (rtb_Switch_bx > INS_DWork.DelayInput1_DSTATE_cn) {
    rtb_Divide1 = INS_DWork.Delay_4_DSTATE;
  } else {
    rtb_Divide1 = INS_DWork.Delay_DSTATE_a;
  }

  /* End of Switch: '<S391>/Switch' */

  /* Gain: '<S394>/Gain' */
  rtb_DiscreteTimeIntegrator_eh = INS_P.Gain_Gain_oy * rtb_Divide1;

  /* Constant: '<S395>/Constant' */
  rtb_M_OC[8] = INS_P.Constant_Value_es;

  /* Constant: '<S395>/Constant1' */
  rtb_M_OC[7] = INS_P.Constant1_Value_ok;

  /* Constant: '<S395>/Constant2' */
  rtb_M_OC[6] = INS_P.Constant2_Value_n;

  /* Constant: '<S395>/Constant3' */
  rtb_M_OC[2] = INS_P.Constant3_Value_i;

  /* Constant: '<S395>/Constant4' */
  rtb_M_OC[5] = INS_P.Constant4_Value_b;

  /* Trigonometry: '<S395>/Trigonometric Function2' incorporates:
   *  Trigonometry: '<S395>/Trigonometric Function'
   */
  rtb_Gain_gz_idx_2 = arm_sin_f32(rtb_DiscreteTimeIntegrator_eh);

  /* Gain: '<S395>/Gain' incorporates:
   *  Trigonometry: '<S395>/Trigonometric Function2'
   */
  rtb_M_OC[3] = INS_P.Gain_Gain_mn * rtb_Gain_gz_idx_2;

  /* Trigonometry: '<S395>/Trigonometric Function' */
  rtb_M_OC[1] = rtb_Gain_gz_idx_2;

  /* Trigonometry: '<S395>/Trigonometric Function1' incorporates:
   *  Trigonometry: '<S395>/Trigonometric Function3'
   */
  rtb_Gain_gz_idx_2 = arm_cos_f32(rtb_DiscreteTimeIntegrator_eh);
  rtb_M_OC[0] = rtb_Gain_gz_idx_2;

  /* Trigonometry: '<S395>/Trigonometric Function3' */
  rtb_M_OC[4] = rtb_Gain_gz_idx_2;

  /* Math: '<S391>/Transpose' */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_M_OC_0[3 * rtb_Saturation1_j_idx_1_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_1_0];
    rtb_M_OC_0[1 + 3 * rtb_Saturation1_j_idx_1_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 3];
    rtb_M_OC_0[2 + 3 * rtb_Saturation1_j_idx_1_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 6];
  }

  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 9;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_M_OC[rtb_Saturation1_j_idx_1_0] = rtb_M_OC_0[rtb_Saturation1_j_idx_1_0];
  }

  /* End of Math: '<S391>/Transpose' */

  /* SignalConversion: '<S388>/TmpSignal ConversionAtMultiplyInport2' incorporates:
   *  Gain: '<S388>/Gain'
   *  Inport: '<Root>/External_Pos'
   */
  rtb_Sum2_by = INS_P.Gain_Gain_np * INS_U.External_Pos.z;

  /* Product: '<S388>/Multiply' incorporates:
   *  Inport: '<Root>/External_Pos'
   *  SignalConversion: '<S388>/TmpSignal ConversionAtMultiplyInport2'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_Multiply_hs[rtb_Saturation1_j_idx_1_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 6] * rtb_Sum2_by +
      (rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 3] * INS_U.External_Pos.y +
       rtb_M_OC[rtb_Saturation1_j_idx_1_0] * INS_U.External_Pos.x);
  }

  /* End of Product: '<S388>/Multiply' */

  /* Logic: '<S389>/Logical Operator3' incorporates:
   *  Inport: '<Root>/External_Pos'
   *  S-Function (sfix_bitop): '<S389>/height valid'
   */
  rtb_LogicalOperator3 = (rtb_WGS84_pos_valid &&
    ((INS_U.External_Pos.field_valid & INS_P.heightvalid_BitMask) != 0U));

  /* Logic: '<S389>/Logical Operator5' incorporates:
   *  Inport: '<Root>/External_Pos'
   *  S-Function (sfix_bitop): '<S389>/heading valid'
   */
  rtb_LogicalOperator5 = (rtb_WGS84_pos_valid &&
    ((INS_U.External_Pos.field_valid & INS_P.headingvalid_BitMask) != 0U));

  /* Update for Delay: '<S390>/Delay' */
  INS_DWork.Delay_DSTATE_e = rtb_Switch_pt;

  /* Update for Delay: '<S391>/Delay' */
  INS_DWork.Delay_DSTATE_a = rtb_Divide1;

  /* Update for UnitDelay: '<S392>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_cn = rtb_Switch_bx;

  /* Update for UnitDelay: '<S397>/Delay Input1' incorporates:
   *  Inport: '<Root>/External_Pos'
   */
  INS_DWork.DelayInput1_DSTATE_b = INS_U.External_Pos.timestamp;

  /* Update for DiscreteIntegrator: '<S389>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S389>/Constant'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTAT_nj +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nj = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nj = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S389>/Discrete-Time Integrator' */

  /* Update for Delay: '<S398>/Delay' */
  INS_DWork.Delay_DSTATE_g = rtb_Switch_ox;

  /* Update for Delay: '<S393>/Delay' */
  INS_DWork.Delay_DSTATE_gj = rtb_Switch_bx;

  /* End of Outputs for SubSystem: '<S3>/ExternalPos_Process' */

  /* Outputs for Atomic SubSystem: '<S3>/GPS_PreProcess' */
  /* RelationalOperator: '<S413>/Compare' incorporates:
   *  Constant: '<S413>/Constant'
   *  UnitDelay: '<S412>/Unit Delay'
   */
  rtb_WGS84_pos_valid = (INS_DWork.UnitDelay_DSTATE >= INS_P.valid_samples_const);

  /* RelationalOperator: '<S411>/Compare' incorporates:
   *  Constant: '<S411>/Constant'
   *  Inport: '<Root>/GPS_uBlox'
   */
  rtb_Switch_pt = (uint8_T)(INS_U.GPS_uBlox.fixType ==
    INS_P.CompareToConstant1_const_n);

  /* DiscreteIntegrator: '<S406>/Discrete-Time Integrator' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   *  RelationalOperator: '<S415>/FixPt Relational Operator'
   *  UnitDelay: '<S415>/Delay Input1'
   */
  if (INS_U.GPS_uBlox.timestamp != INS_DWork.DelayInput1_DSTATE_i) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_i =
      INS_P.DiscreteTimeIntegrator_IC_p;
  }

  /* RelationalOperator: '<S414>/Compare' incorporates:
   *  Constant: '<S414>/Constant'
   *  DiscreteIntegrator: '<S406>/Discrete-Time Integrator'
   */
  rtb_FixPtRelationalOperator_nc = (INS_DWork.DiscreteTimeIntegrator_DSTATE_i <
    INS_P.CompareToConstant4_const_e);

  /* Sum: '<S405>/Sum1' incorporates:
   *  Logic: '<S405>/Logical Operator1'
   */
  rtb_Switch_ox = (uint8_T)((uint32_T)(rtb_WGS84_pos_valid && (rtb_Switch_pt !=
    0) && rtb_FixPtRelationalOperator_nc) + rtb_WGS84_pos_valid);

  /* RelationalOperator: '<S399>/Compare' incorporates:
   *  Constant: '<S399>/Constant'
   */
  rtb_Compare_c5 = (rtb_Switch_ox > INS_P.CompareToConstant_const_i);

  /* RelationalOperator: '<S400>/Compare' incorporates:
   *  Constant: '<S400>/Constant'
   */
  rtb_Compare_cio = (rtb_Switch_ox == INS_P.CompareToConstant1_const_la);

  /* Gain: '<S401>/Gain' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   */
  rtb_Divide1 = (real32_T)INS_P.Gain_Gain * 9.09494702E-13F * (real32_T)
    INS_U.GPS_uBlox.velN;

  /* Gain: '<S401>/Gain1' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   */
  rtb_Sum2_by = (real32_T)INS_P.Gain1_Gain * 9.09494702E-13F * (real32_T)
    INS_U.GPS_uBlox.velE;

  /* Gain: '<S401>/Gain2' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   */
  rtb_Gain2_a = (real32_T)INS_P.Gain2_Gain * 9.09494702E-13F * (real32_T)
    INS_U.GPS_uBlox.velD;

  /* Gain: '<S401>/Scalefactor1' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   */
  rtb_Scalefactor1 = (real_T)INS_P.Scalefactor1_Gain * 8.6736173798840355E-19 *
    (real_T)INS_U.GPS_uBlox.lat;

  /* Gain: '<S401>/Scalefactor2' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   */
  rtb_Scalefactor2 = (real_T)INS_P.Scalefactor2_Gain * 8.6736173798840355E-19 *
    (real_T)INS_U.GPS_uBlox.lon;

  /* Gain: '<S401>/Scalefactor3' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   */
  rtb_Scalefactor3 = (real_T)INS_P.Scalefactor3_Gain * 9.0949470177292824E-13 *
    (real_T)INS_U.GPS_uBlox.height;

  /* RelationalOperator: '<S404>/Compare' incorporates:
   *  Constant: '<S404>/Constant'
   */
  rtb_WGS84_pos_valid = (rtb_Switch_ox == INS_P.CompareToConstant2_const_bv);

  /* Gain: '<S407>/Gain2' incorporates:
   *  Constant: '<S407>/Constant1'
   *  Gain: '<S407>/Gain1'
   *  Inport: '<Root>/GPS_uBlox'
   *  Sum: '<S407>/Sum1'
   */
  rtb_DiscreteTimeIntegrator_g = (INS_PARAM.GPS_HOR_Q_BIAS - (real32_T)
    INS_P.Gain1_Gain_po * 4.54747351E-13F * (real32_T)INS_U.GPS_uBlox.hAcc) *
    INS_PARAM.GPS_HOR_Q_SCALE;

  /* Saturate: '<S407>/Saturation1' */
  if (rtb_DiscreteTimeIntegrator_g > INS_P.Saturation1_UpperSat_m) {
    rtb_DiscreteTimeIntegrator_g = INS_P.Saturation1_UpperSat_m;
  } else {
    if (rtb_DiscreteTimeIntegrator_g < INS_P.Saturation1_LowerSat_d) {
      rtb_DiscreteTimeIntegrator_g = INS_P.Saturation1_LowerSat_d;
    }
  }

  /* End of Saturate: '<S407>/Saturation1' */

  /* DiscreteIntegrator: '<S416>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S416>/Constant'
   */
  if (INS_DWork.DiscreteTimeIntegrator1_IC_LO_j != 0) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_g = rtb_DiscreteTimeIntegrator_g;
  }

  if ((INS_P.Constant_Value_n5 != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator1_PrevR_l != 0)) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_g = rtb_DiscreteTimeIntegrator_g;
  }

  /* Product: '<S402>/Product' incorporates:
   *  DiscreteIntegrator: '<S416>/Discrete-Time Integrator1'
   */
  rtb_Product_d4 = rtb_WGS84_pos_valid ? rtb_FixPtRelationalOperator_nc ?
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_g : 0.0F : 0.0F;

  /* Gain: '<S408>/Gain3' incorporates:
   *  Constant: '<S408>/Constant7'
   *  Gain: '<S408>/Gain5'
   *  Inport: '<Root>/GPS_uBlox'
   *  Sum: '<S408>/Sum'
   */
  rtb_Saturation_a = (INS_PARAM.GPS_VEL_Q_BIAS - (real32_T)INS_P.Gain5_Gain *
                      4.54747351E-13F * (real32_T)INS_U.GPS_uBlox.sAcc) *
    INS_PARAM.GPS_VEL_Q_SCALE;

  /* Saturate: '<S408>/Saturation' */
  if (rtb_Saturation_a > INS_P.Saturation_UpperSat_l) {
    rtb_Saturation_a = INS_P.Saturation_UpperSat_l;
  } else {
    if (rtb_Saturation_a < INS_P.Saturation_LowerSat_ku) {
      rtb_Saturation_a = INS_P.Saturation_LowerSat_ku;
    }
  }

  /* End of Saturate: '<S408>/Saturation' */

  /* DiscreteIntegrator: '<S417>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S417>/Constant'
   */
  if (INS_DWork.DiscreteTimeIntegrator1_IC_LO_e != 0) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_m = rtb_Saturation_a;
  }

  if ((INS_P.Constant_Value_k != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator1_PrevR_j != 0)) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_m = rtb_Saturation_a;
  }

  /* Product: '<S402>/Product2' incorporates:
   *  DiscreteIntegrator: '<S417>/Discrete-Time Integrator1'
   */
  rtb_Product2 = rtb_WGS84_pos_valid ? rtb_FixPtRelationalOperator_nc ?
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_m : 0.0F : 0.0F;

  /* DiscreteIntegrator: '<S416>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S416>/Constant'
   */
  if ((INS_P.Constant_Value_n5 != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator_PrevRe_a != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_k =
      INS_P.DiscreteTimeIntegrator_IC_d;
  }

  /* Gain: '<S416>/Gain' incorporates:
   *  DiscreteIntegrator: '<S416>/Discrete-Time Integrator1'
   *  Sum: '<S416>/Sum'
   */
  rtb_DiscreteTimeIntegrator_g = (rtb_DiscreteTimeIntegrator_g -
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_g) * INS_P.Gain_Gain_j2;

  /* DiscreteIntegrator: '<S417>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S417>/Constant'
   */
  if ((INS_P.Constant_Value_k != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator_PrevRe_j != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_l =
      INS_P.DiscreteTimeIntegrator_IC_f;
  }

  /* Gain: '<S417>/Gain' incorporates:
   *  DiscreteIntegrator: '<S417>/Discrete-Time Integrator1'
   *  Sum: '<S417>/Sum'
   */
  rtb_Saturation_a = (rtb_Saturation_a -
                      INS_DWork.DiscreteTimeIntegrator1_DSTAT_m) *
    INS_P.Gain_Gain_gh;

  /* Outputs for Triggered SubSystem: '<S368>/WGS84_Model' incorporates:
   *  TriggerPort: '<S403>/Trigger'
   */
  if (rtb_Compare_c5 && (INS_PrevZCSigState.WGS84_Model_Trig_ZCE != POS_ZCSIG))
  {
    /* DataTypeConversion: '<S403>/Data Type Conversion' */
    INS_B.DataTypeConversion = rtb_Scalefactor2;

    /* DataTypeConversion: '<S403>/Data Type Conversion1' */
    INS_B.DataTypeConversion1 = rtb_Scalefactor1;

    /* Product: '<S419>/Multiply3' incorporates:
     *  Constant: '<S419>/Constant2'
     *  Constant: '<S419>/f'
     *  Sum: '<S419>/Sum'
     */
    rtb_ff = (INS_P.Constant2_Value - INS_P.f_Value) * INS_P.f_Value;

    /* Trigonometry: '<S419>/Sin' */
    rtb_DataTypeConversion1 = sin(INS_B.DataTypeConversion1);

    /* Math: '<S419>/Square1' */
    rtb_DataTypeConversion1 *= rtb_DataTypeConversion1;

    /* Product: '<S419>/Multiply' incorporates:
     *  Product: '<S419>/Multiply1'
     */
    rtb_DataTypeConversion1 *= rtb_ff;

    /* Product: '<S419>/Divide' incorporates:
     *  Constant: '<S419>/Constant'
     *  Constant: '<S419>/R'
     *  Product: '<S419>/Multiply'
     *  Sqrt: '<S419>/Sqrt'
     *  Sum: '<S419>/Sum1'
     */
    rtb_DataTypeConversion2 = INS_P.R_Value / sqrt(INS_P.Constant_Value_n -
      rtb_DataTypeConversion1);

    /* Product: '<S419>/Multiply2' incorporates:
     *  Trigonometry: '<S419>/Cos'
     */
    INS_B.Multiply2 = rtb_DataTypeConversion2 * cos(INS_B.DataTypeConversion1);

    /* Product: '<S419>/Product3' incorporates:
     *  Constant: '<S419>/Constant1'
     *  Sum: '<S419>/Sum2'
     *  Sum: '<S419>/Sum4'
     */
    INS_B.Rm = 1.0 / (INS_P.Constant1_Value - rtb_DataTypeConversion1) *
      (INS_P.Constant1_Value - rtb_ff) * rtb_DataTypeConversion2;
  }

  INS_PrevZCSigState.WGS84_Model_Trig_ZCE = rtb_Compare_c5;

  /* End of Outputs for SubSystem: '<S368>/WGS84_Model' */

  /* Sum: '<S412>/Sum' incorporates:
   *  Constant: '<S410>/Constant'
   *  Inport: '<Root>/GPS_uBlox'
   *  Logic: '<S405>/Logical Operator'
   *  RelationalOperator: '<S410>/Compare'
   *  UnitDelay: '<S412>/Unit Delay'
   */
  rtb_Saturation1_j_idx_0 = ((INS_U.GPS_uBlox.hAcc <
    INS_P.CompareToConstant_const_d) && (rtb_Switch_pt != 0) &&
    rtb_FixPtRelationalOperator_nc) + INS_DWork.UnitDelay_DSTATE;

  /* Saturate: '<S412>/Saturation' */
  if (rtb_Saturation1_j_idx_0 > INS_P.Saturation_UpperSat_a) {
    /* Update for UnitDelay: '<S412>/Unit Delay' */
    INS_DWork.UnitDelay_DSTATE = INS_P.Saturation_UpperSat_a;
  } else if (rtb_Saturation1_j_idx_0 < INS_P.Saturation_LowerSat_f) {
    /* Update for UnitDelay: '<S412>/Unit Delay' */
    INS_DWork.UnitDelay_DSTATE = INS_P.Saturation_LowerSat_f;
  } else {
    /* Update for UnitDelay: '<S412>/Unit Delay' */
    INS_DWork.UnitDelay_DSTATE = rtb_Saturation1_j_idx_0;
  }

  /* End of Saturate: '<S412>/Saturation' */

  /* Update for UnitDelay: '<S415>/Delay Input1' incorporates:
   *  Inport: '<Root>/GPS_uBlox'
   */
  INS_DWork.DelayInput1_DSTATE_i = INS_U.GPS_uBlox.timestamp;

  /* Update for DiscreteIntegrator: '<S406>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S406>/Constant'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTATE_i +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_i = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_i = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S406>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S416>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S416>/Constant'
   *  DiscreteIntegrator: '<S416>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_IC_LO_j = 0U;
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_g +=
    INS_P.DiscreteTimeIntegrator1_gainv_b *
    INS_DWork.DiscreteTimeIntegrator_DSTATE_k;
  if (INS_P.Constant_Value_n5 > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_l = 1;
  } else if (INS_P.Constant_Value_n5 < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_l = -1;
  } else if (INS_P.Constant_Value_n5 == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_l = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_l = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S416>/Discrete-Time Integrator1' */

  /* Update for DiscreteIntegrator: '<S417>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S417>/Constant'
   *  DiscreteIntegrator: '<S417>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_IC_LO_e = 0U;
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_m +=
    INS_P.DiscreteTimeIntegrator1_gainv_e *
    INS_DWork.DiscreteTimeIntegrator_DSTATE_l;
  if (INS_P.Constant_Value_k > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_j = 1;
  } else if (INS_P.Constant_Value_k < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_j = -1;
  } else if (INS_P.Constant_Value_k == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_j = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_j = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S417>/Discrete-Time Integrator1' */

  /* Update for DiscreteIntegrator: '<S416>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S416>/Constant'
   *  Gain: '<S416>/Gain1'
   *  Sum: '<S416>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_k += (rtb_DiscreteTimeIntegrator_g -
    INS_P.Gain1_Gain_kf * INS_DWork.DiscreteTimeIntegrator_DSTATE_k) *
    INS_P.DiscreteTimeIntegrator_gainva_g;
  if (INS_P.Constant_Value_n5 > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_a = 1;
  } else if (INS_P.Constant_Value_n5 < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_a = -1;
  } else if (INS_P.Constant_Value_n5 == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_a = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_a = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S416>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S417>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S417>/Constant'
   *  Gain: '<S417>/Gain1'
   *  Sum: '<S417>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_l += (rtb_Saturation_a -
    INS_P.Gain1_Gain_cj * INS_DWork.DiscreteTimeIntegrator_DSTATE_l) *
    INS_P.DiscreteTimeIntegrator_gainv_mf;
  if (INS_P.Constant_Value_k > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_j = 1;
  } else if (INS_P.Constant_Value_k < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_j = -1;
  } else if (INS_P.Constant_Value_k == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_j = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_j = 2;
  }

  /* End of Update for DiscreteIntegrator: '<S417>/Discrete-Time Integrator' */
  /* End of Outputs for SubSystem: '<S3>/GPS_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
  /* SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport4' incorporates:
   *  Inport: '<Root>/IMU'
   */
  rtb_VectorConcatenate1[0] = INS_U.IMU.acc_x;

  /* SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport5' incorporates:
   *  Inport: '<Root>/IMU'
   */
  rtb_VectorConcatenate1[1] = INS_U.IMU.acc_y;

  /* SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport6' incorporates:
   *  Inport: '<Root>/IMU'
   */
  rtb_VectorConcatenate1[2] = INS_U.IMU.acc_z;

  /* DiscreteIntegrator: '<S421>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S424>/Constant1'
   *  Delay: '<S424>/Delay'
   *  Inport: '<Root>/IMU'
   *  RelationalOperator: '<S423>/FixPt Relational Operator'
   *  Switch: '<S424>/Switch'
   *  UnitDelay: '<S423>/Delay Input1'
   */
  if (INS_U.IMU.timestamp != INS_DWork.DelayInput1_DSTATE_h) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lp =
      INS_P.DiscreteTimeIntegrator_IC_ba;
    rtb_Switch_pt = INS_P.Constant1_Value_no;
  } else {
    rtb_Switch_pt = INS_DWork.Delay_DSTATE_bw;
  }

  /* Logic: '<S421>/Logical Operator4' incorporates:
   *  Constant: '<S422>/Constant'
   *  Constant: '<S425>/Lower Limit'
   *  Constant: '<S425>/Upper Limit'
   *  Constant: '<S426>/Lower Limit'
   *  Constant: '<S426>/Upper Limit'
   *  DiscreteIntegrator: '<S421>/Discrete-Time Integrator'
   *  Inport: '<Root>/IMU'
   *  Logic: '<S421>/Logical Operator'
   *  Logic: '<S421>/Logical Operator1'
   *  Logic: '<S421>/Logical Operator2'
   *  Logic: '<S425>/AND'
   *  Logic: '<S426>/AND'
   *  RelationalOperator: '<S422>/Compare'
   *  RelationalOperator: '<S425>/Lower Test'
   *  RelationalOperator: '<S425>/Upper Test'
   *  RelationalOperator: '<S426>/Lower Test'
   *  RelationalOperator: '<S426>/Upper Test'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport1'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport2'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport3'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport4'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport5'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport6'
   */
  rtb_FixPtRelationalOperator_nc = ((INS_P.Sensor_Valid_gyr_min <
    INS_U.IMU.gyr_x) && (INS_U.IMU.gyr_x < INS_P.Sensor_Valid_gyr_max) &&
    ((INS_P.Sensor_Valid_gyr_min < INS_U.IMU.gyr_y) && (INS_U.IMU.gyr_y <
    INS_P.Sensor_Valid_gyr_max)) && ((INS_P.Sensor_Valid_gyr_min <
    INS_U.IMU.gyr_z) && (INS_U.IMU.gyr_z < INS_P.Sensor_Valid_gyr_max)) &&
    ((INS_P.Sensor_Valid_acc_min < INS_U.IMU.acc_x) && (INS_U.IMU.acc_x <
    INS_P.Sensor_Valid_acc_max) && ((INS_P.Sensor_Valid_acc_min <
    INS_U.IMU.acc_y) && (INS_U.IMU.acc_y < INS_P.Sensor_Valid_acc_max)) &&
     ((INS_P.Sensor_Valid_acc_min < INS_U.IMU.acc_z) && (INS_U.IMU.acc_z <
    INS_P.Sensor_Valid_acc_max))) && (INS_DWork.DiscreteTimeIntegrator_DSTAT_lp <
    INS_P.Sensor_Valid_timeout_a) && (rtb_Switch_pt != 0));

  /* Update for UnitDelay: '<S423>/Delay Input1' incorporates:
   *  Inport: '<Root>/IMU'
   */
  INS_DWork.DelayInput1_DSTATE_h = INS_U.IMU.timestamp;

  /* Update for DiscreteIntegrator: '<S421>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S421>/Constant'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTAT_lp +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lp = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lp = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S421>/Discrete-Time Integrator' */

  /* Update for Delay: '<S424>/Delay' */
  INS_DWork.Delay_DSTATE_bw = rtb_Switch_pt;

  /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S3>/MAG_PreProcess' */
  /* Gain: '<S370>/Gauss_to_uT' incorporates:
   *  Inport: '<Root>/MAG'
   *  SignalConversion: '<S427>/ConcatBufferAtVector Concatenate2In1'
   *  SignalConversion: '<S427>/ConcatBufferAtVector Concatenate2In2'
   *  SignalConversion: '<S427>/ConcatBufferAtVector Concatenate2In3'
   */
  rtb_Gauss_to_uT[0] = INS_P.Gauss_to_uT_Gain * INS_U.MAG.mag_x;
  rtb_Gauss_to_uT[1] = INS_P.Gauss_to_uT_Gain * INS_U.MAG.mag_y;
  rtb_Gauss_to_uT[2] = INS_P.Gauss_to_uT_Gain * INS_U.MAG.mag_z;

  /* Gain: '<S432>/rad_to_index' incorporates:
   *  SignalConversion: '<S432>/TmpSignal ConversionAtrad_to_indexInport1'
   */
  rtb_ff = 57.295779513082323 / INS_P.WMM_LUT_resolution;
  rtb_DataTypeConversion1 = fmod(floor(rtb_ff * INS_B.DataTypeConversion1),
    4.294967296E+9);

  /* Sum: '<S432>/Add' incorporates:
   *  Constant: '<S432>/offset'
   *  Gain: '<S432>/rad_to_index'
   */
  rtb_Saturation1_j_idx_0 = (rtb_DataTypeConversion1 < 0.0 ? -(int32_T)(uint32_T)
    -rtb_DataTypeConversion1 : (int32_T)(uint32_T)rtb_DataTypeConversion1) +
    INS_P.offset_Value[0];

  /* Saturate: '<S432>/Saturation1' */
  if (rtb_Saturation1_j_idx_0 > INS_P.Saturation1_UpperSat[0]) {
    rtb_Saturation1_j_idx_0 = INS_P.Saturation1_UpperSat[0];
  } else {
    if (rtb_Saturation1_j_idx_0 < INS_P.Saturation1_LowerSat) {
      rtb_Saturation1_j_idx_0 = INS_P.Saturation1_LowerSat;
    }
  }

  /* Gain: '<S432>/rad_to_index' incorporates:
   *  SignalConversion: '<S432>/TmpSignal ConversionAtrad_to_indexInport1'
   */
  rtb_DataTypeConversion1 = fmod(floor(rtb_ff * INS_B.DataTypeConversion),
    4.294967296E+9);

  /* Sum: '<S432>/Add' incorporates:
   *  Constant: '<S432>/offset'
   *  Gain: '<S432>/rad_to_index'
   */
  rtb_Saturation1_j_idx_1 = (rtb_DataTypeConversion1 < 0.0 ? -(int32_T)(uint32_T)
    -rtb_DataTypeConversion1 : (int32_T)(uint32_T)rtb_DataTypeConversion1) +
    INS_P.offset_Value[1];

  /* Saturate: '<S432>/Saturation1' */
  if (rtb_Saturation1_j_idx_1 > INS_P.Saturation1_UpperSat[1]) {
    rtb_Saturation1_j_idx_1 = INS_P.Saturation1_UpperSat[1];
  } else {
    if (rtb_Saturation1_j_idx_1 < INS_P.Saturation1_LowerSat) {
      rtb_Saturation1_j_idx_1 = INS_P.Saturation1_LowerSat;
    }
  }

  /* Switch: '<S431>/Switch3' incorporates:
   *  Constant: '<S439>/Constant'
   *  Constant: '<S439>/Constant1'
   *  Constant: '<S439>/Constant2'
   *  Constant: '<S439>/Constant3'
   *  Constant: '<S439>/Constant4'
   *  Delay: '<Root>/Delay'
   *  Product: '<S431>/Product6'
   *  Product: '<S431>/Product7'
   */
  if (rtb_Compare_cio) {
    /* LookupNDDirect: '<S432>/Magnitude_Lookup_Table'
     *
     * About '<S432>/Magnitude_Lookup_Table':
     *  2-dimensional Direct Look-Up returning a Scalar,
     */
    if (rtb_Saturation1_j_idx_1 > 36) {
      rtb_Saturation1_j_idx_1_0 = 36;
    } else if (rtb_Saturation1_j_idx_1 < 0) {
      rtb_Saturation1_j_idx_1_0 = 0;
    } else {
      rtb_Saturation1_j_idx_1_0 = rtb_Saturation1_j_idx_1;
    }

    if (rtb_Saturation1_j_idx_0 > 16) {
      rtb_Saturation1_j_idx_0_0 = 16;
    } else if (rtb_Saturation1_j_idx_0 < 0) {
      rtb_Saturation1_j_idx_0_0 = 0;
    } else {
      rtb_Saturation1_j_idx_0_0 = rtb_Saturation1_j_idx_0;
    }

    /* MinMax: '<S441>/MinMax' incorporates:
     *  Constant: '<S441>/Constant1'
     *  LookupNDDirect: '<S432>/Magnitude_Lookup_Table'
     *
     * About '<S432>/Magnitude_Lookup_Table':
     *  2-dimensional Direct Look-Up returning a Scalar,
     */
    rtb_MathFunction1 = fmaxf(INS_P.Constant1_Value_l1,
      INS_P.INS_CONST.wmm_mag[rtb_Saturation1_j_idx_1_0 * 17 +
      rtb_Saturation1_j_idx_0_0]);
    rtb_VectorConcatenate_h[8] = INS_P.Constant_Value_a1;
    rtb_VectorConcatenate_h[7] = INS_P.Constant1_Value_i;
    rtb_VectorConcatenate_h[6] = INS_P.Constant2_Value_mb;
    rtb_VectorConcatenate_h[5] = INS_P.Constant4_Value_c;

    /* LookupNDDirect: '<S432>/Declination_Lookup_Table' incorporates:
     *  Constant: '<S439>/Constant'
     *  Constant: '<S439>/Constant1'
     *  Constant: '<S439>/Constant2'
     *  Constant: '<S439>/Constant4'
     *
     * About '<S432>/Declination_Lookup_Table':
     *  2-dimensional Direct Look-Up returning a Scalar,
     */
    if (rtb_Saturation1_j_idx_1 > 36) {
      rtb_Saturation1_j_idx_1_0 = 36;
    } else if (rtb_Saturation1_j_idx_1 < 0) {
      rtb_Saturation1_j_idx_1_0 = 0;
    } else {
      rtb_Saturation1_j_idx_1_0 = rtb_Saturation1_j_idx_1;
    }

    if (rtb_Saturation1_j_idx_0 > 16) {
      rtb_Saturation1_j_idx_0_0 = 16;
    } else if (rtb_Saturation1_j_idx_0 < 0) {
      rtb_Saturation1_j_idx_0_0 = 0;
    } else {
      rtb_Saturation1_j_idx_0_0 = rtb_Saturation1_j_idx_0;
    }

    /* Gain: '<S431>/Gain' incorporates:
     *  LookupNDDirect: '<S432>/Declination_Lookup_Table'
     *
     * About '<S432>/Declination_Lookup_Table':
     *  2-dimensional Direct Look-Up returning a Scalar,
     */
    rtb_dec_rad = INS_P.INS_CONST.wmm_dec[rtb_Saturation1_j_idx_1_0 * 17 +
      rtb_Saturation1_j_idx_0_0] * INS_P.Gain_Gain_gg;

    /* Trigonometry: '<S439>/Trigonometric Function3' incorporates:
     *  Trigonometry: '<S439>/Trigonometric Function1'
     */
    rtb_Saturation_a = arm_cos_f32(rtb_dec_rad);
    rtb_VectorConcatenate_h[4] = rtb_Saturation_a;

    /* Trigonometry: '<S439>/Trigonometric Function2' incorporates:
     *  Trigonometry: '<S439>/Trigonometric Function'
     */
    rtb_Memory_m_idx_0 = arm_sin_f32(rtb_dec_rad);

    /* Gain: '<S439>/Gain' incorporates:
     *  Trigonometry: '<S439>/Trigonometric Function2'
     */
    rtb_VectorConcatenate_h[3] = INS_P.Gain_Gain_bo * rtb_Memory_m_idx_0;
    rtb_VectorConcatenate_h[2] = INS_P.Constant3_Value_f;

    /* Trigonometry: '<S439>/Trigonometric Function' incorporates:
     *  Constant: '<S439>/Constant3'
     */
    rtb_VectorConcatenate_h[1] = rtb_Memory_m_idx_0;

    /* Trigonometry: '<S439>/Trigonometric Function1' */
    rtb_VectorConcatenate_h[0] = rtb_Saturation_a;

    /* Product: '<S441>/Divide1' */
    rtb_Saturation_a = rtb_Gauss_to_uT[0] / rtb_MathFunction1;
    rtb_Memory_m_idx_0 = rtb_Gauss_to_uT[1] / rtb_MathFunction1;
    rtb_MathFunction1 = rtb_Gauss_to_uT[2] / rtb_MathFunction1;

    /* Product: '<S431>/Product5' incorporates:
     *  Delay: '<Root>/Delay'
     */
    for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
         rtb_Saturation1_j_idx_1_0++) {
      rtb_Gauss_to_uT[rtb_Saturation1_j_idx_1_0] =
        INS_DWork.Delay_8_DSTATE[rtb_Saturation1_j_idx_1_0 + 6] *
        rtb_MathFunction1 + (INS_DWork.Delay_8_DSTATE[rtb_Saturation1_j_idx_1_0
        + 3] * rtb_Memory_m_idx_0 +
        INS_DWork.Delay_8_DSTATE[rtb_Saturation1_j_idx_1_0] * rtb_Saturation_a);
    }

    /* End of Product: '<S431>/Product5' */
    for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
         rtb_Saturation1_j_idx_1_0++) {
      rtb_MathFunction[rtb_Saturation1_j_idx_1_0] =
        rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0 + 6] *
        rtb_Gauss_to_uT[2] + (rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0
        + 3] * rtb_Gauss_to_uT[1] +
        rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0] * rtb_Gauss_to_uT[0]);
    }
  } else {
    /* Sum: '<S440>/Sum of Elements' incorporates:
     *  Math: '<S440>/Math Function'
     */
    rtb_MathFunction1 = (rtb_Gauss_to_uT[0] * rtb_Gauss_to_uT[0] +
                         rtb_Gauss_to_uT[1] * rtb_Gauss_to_uT[1]) +
      rtb_Gauss_to_uT[2] * rtb_Gauss_to_uT[2];

    /* Math: '<S440>/Math Function1'
     *
     * About '<S440>/Math Function1':
     *  Operator: sqrt
     */
    if (rtb_MathFunction1 < 0.0F) {
      rtb_MathFunction1 = -sqrtf(fabsf(rtb_MathFunction1));
    } else {
      rtb_MathFunction1 = sqrtf(rtb_MathFunction1);
    }

    /* End of Math: '<S440>/Math Function1' */

    /* Switch: '<S440>/Switch' incorporates:
     *  Constant: '<S440>/Constant'
     *  Product: '<S440>/Product'
     */
    if (rtb_MathFunction1 > INS_P.Switch_Threshold_b) {
      rtb_Sum_p_idx_0 = rtb_Gauss_to_uT[0];
      rtb_Sum_p_idx_1 = rtb_Gauss_to_uT[1];
      rtb_Switch_kj_idx_2 = rtb_Gauss_to_uT[2];
      rtb_Switch_kj_idx_3 = rtb_MathFunction1;
    } else {
      rtb_Sum_p_idx_0 = 0.0F;
      rtb_Sum_p_idx_1 = 0.0F;
      rtb_Switch_kj_idx_2 = 0.0F;
      rtb_Switch_kj_idx_3 = INS_P.Constant_Value_hy;
    }

    /* End of Switch: '<S440>/Switch' */

    /* Product: '<S440>/Divide' */
    rtb_MathFunction1 = rtb_Sum_p_idx_0 / rtb_Switch_kj_idx_3;
    rtb_Saturation_a = rtb_Sum_p_idx_1 / rtb_Switch_kj_idx_3;
    rtb_Switch_kj_idx_2 /= rtb_Switch_kj_idx_3;
    for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
         rtb_Saturation1_j_idx_1_0++) {
      rtb_MathFunction[rtb_Saturation1_j_idx_1_0] =
        INS_DWork.Delay_8_DSTATE[rtb_Saturation1_j_idx_1_0 + 6] *
        rtb_Switch_kj_idx_2 +
        (INS_DWork.Delay_8_DSTATE[rtb_Saturation1_j_idx_1_0 + 3] *
         rtb_Saturation_a + INS_DWork.Delay_8_DSTATE[rtb_Saturation1_j_idx_1_0] *
         rtb_MathFunction1);
    }
  }

  /* End of Switch: '<S431>/Switch3' */

  /* Math: '<S438>/Square' incorporates:
   *  Math: '<S437>/Square'
   */
  rtb_MathFunction1 = rtb_MathFunction[0] * rtb_MathFunction[0];
  rtb_Saturation_a = rtb_MathFunction[1] * rtb_MathFunction[1];

  /* LookupNDDirect: '<S432>/Inclination_Lookup_Table'
   *
   * About '<S432>/Inclination_Lookup_Table':
   *  2-dimensional Direct Look-Up returning a Scalar,
   */
  if (rtb_Saturation1_j_idx_1 > 36) {
    rtb_Saturation1_j_idx_1 = 36;
  } else {
    if (rtb_Saturation1_j_idx_1 < 0) {
      rtb_Saturation1_j_idx_1 = 0;
    }
  }

  if (rtb_Saturation1_j_idx_0 > 16) {
    rtb_Saturation1_j_idx_0 = 16;
  } else {
    if (rtb_Saturation1_j_idx_0 < 0) {
      rtb_Saturation1_j_idx_0 = 0;
    }
  }

  /* Sum: '<S434>/Sum3' incorporates:
   *  Abs: '<S434>/Abs1'
   *  Constant: '<S434>/Constant2'
   *  Gain: '<S434>/Gain1'
   *  Gain: '<S434>/gain'
   *  LookupNDDirect: '<S432>/Inclination_Lookup_Table'
   *  Sqrt: '<S437>/Sqrt'
   *  Sum: '<S434>/Subtract'
   *  Sum: '<S437>/Sum of Elements'
   *  Trigonometry: '<S434>/Trigonometric Function'
   *
   * About '<S432>/Inclination_Lookup_Table':
   *  2-dimensional Direct Look-Up returning a Scalar,
   */
  rtb_DiscreteTimeIntegrator_g = INS_P.Constant2_Value_h - fabsf
    (INS_P.INS_CONST.wmm_inc[rtb_Saturation1_j_idx_1 * 17 +
     rtb_Saturation1_j_idx_0] * INS_P.Gain1_Gain_o - atan2f(rtb_MathFunction[2],
      sqrtf(rtb_MathFunction1 + rtb_Saturation_a))) * INS_P.gain_Gain_g;

  /* Sum: '<S435>/Sum' incorporates:
   *  Abs: '<S435>/Abs'
   *  Constant: '<S435>/Constant1'
   *  Constant: '<S435>/Nominal_Magnitude'
   *  Gain: '<S435>/gain'
   *  Math: '<S438>/Square'
   *  Sqrt: '<S438>/Sqrt'
   *  Sum: '<S435>/Subtract'
   *  Sum: '<S438>/Sum of Elements'
   */
  rtb_MathFunction1 = INS_P.Constant1_Value_c - fabsf
    (INS_P.Nominal_Magnitude_Value - sqrtf((rtb_MathFunction1 + rtb_Saturation_a)
      + rtb_MathFunction[2] * rtb_MathFunction[2])) * INS_P.gain_Gain_m;

  /* Saturate: '<S434>/Saturation' */
  if (rtb_DiscreteTimeIntegrator_g > INS_P.Saturation_UpperSat_g) {
    rtb_DiscreteTimeIntegrator_g = INS_P.Saturation_UpperSat_g;
  } else {
    if (rtb_DiscreteTimeIntegrator_g < INS_P.Saturation_LowerSat_a) {
      rtb_DiscreteTimeIntegrator_g = INS_P.Saturation_LowerSat_a;
    }
  }

  /* End of Saturate: '<S434>/Saturation' */

  /* Saturate: '<S435>/Saturation' */
  if (rtb_MathFunction1 > INS_P.Saturation_UpperSat_gv) {
    rtb_MathFunction1 = INS_P.Saturation_UpperSat_gv;
  } else {
    if (rtb_MathFunction1 < INS_P.Saturation_LowerSat_p) {
      rtb_MathFunction1 = INS_P.Saturation_LowerSat_p;
    }
  }

  /* End of Saturate: '<S435>/Saturation' */

  /* MinMax: '<S433>/MinMax' */
  rtb_Saturation_a = fminf(rtb_DiscreteTimeIntegrator_g, rtb_MathFunction1);

  /* DiscreteIntegrator: '<S436>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S436>/Constant'
   */
  if ((INS_P.Constant_Value_fn != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator_PrevRe_k != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE = INS_P.DiscreteTimeIntegrator_IC_mb;
  }

  rtb_DiscreteTimeIntegrator_eh = INS_DWork.DiscreteTimeIntegrator_DSTATE;

  /* DiscreteIntegrator: '<S436>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S436>/Constant'
   */
  if (INS_DWork.DiscreteTimeIntegrator1_IC_LOAD != 0) {
    INS_DWork.DiscreteTimeIntegrator1_DSTATE = rtb_Saturation_a;
  }

  if ((INS_P.Constant_Value_fn != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator1_PrevRes != 0)) {
    INS_DWork.DiscreteTimeIntegrator1_DSTATE = rtb_Saturation_a;
  }

  /* DiscreteIntegrator: '<S429>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S444>/Constant1'
   *  Delay: '<S444>/Delay'
   *  Inport: '<Root>/MAG'
   *  RelationalOperator: '<S443>/FixPt Relational Operator'
   *  Switch: '<S444>/Switch'
   *  UnitDelay: '<S443>/Delay Input1'
   */
  if (INS_U.MAG.timestamp != INS_DWork.DelayInput1_DSTATE_n) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lg =
      INS_P.DiscreteTimeIntegrator_IC_k;
    rtb_Switch_pt = INS_P.Constant1_Value_ev;
  } else {
    rtb_Switch_pt = INS_DWork.Delay_DSTATE_fp;
  }

  /* Product: '<S430>/Multiply' incorporates:
   *  Constant: '<S430>/default_mag_quality'
   *  Constant: '<S442>/Constant'
   *  Constant: '<S445>/Lower Limit'
   *  Constant: '<S445>/Upper Limit'
   *  DiscreteIntegrator: '<S429>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S436>/Discrete-Time Integrator1'
   *  Inport: '<Root>/MAG'
   *  Logic: '<S429>/Logical Operator1'
   *  Logic: '<S429>/Logical Operator4'
   *  Logic: '<S445>/AND'
   *  RelationalOperator: '<S442>/Compare'
   *  RelationalOperator: '<S445>/Lower Test'
   *  RelationalOperator: '<S445>/Upper Test'
   *  SignalConversion: '<S427>/ConcatBufferAtVector Concatenate2In1'
   *  SignalConversion: '<S427>/ConcatBufferAtVector Concatenate2In2'
   *  SignalConversion: '<S427>/ConcatBufferAtVector Concatenate2In3'
   *  Switch: '<S430>/Switch'
   */
  rtb_MathFunction1 = (INS_P.Sensor_Valid_mag_min < INS_U.MAG.mag_x) &&
    (INS_U.MAG.mag_x < INS_P.Sensor_Valid_mag_max) &&
    ((INS_P.Sensor_Valid_mag_min < INS_U.MAG.mag_y) && (INS_U.MAG.mag_y <
      INS_P.Sensor_Valid_mag_max)) && ((INS_P.Sensor_Valid_mag_min <
    INS_U.MAG.mag_z) && (INS_U.MAG.mag_z < INS_P.Sensor_Valid_mag_max)) &&
    (INS_DWork.DiscreteTimeIntegrator_DSTAT_lg < INS_P.Sensor_Valid_timeout_b) &&
    (rtb_Switch_pt != 0) ? rtb_Compare_cio ?
    INS_DWork.DiscreteTimeIntegrator1_DSTATE : INS_P.default_mag_quality_Value :
    0.0F;

  /* Product: '<S431>/Product8' incorporates:
   *  Delay: '<Root>/Delay'
   *  Math: '<S431>/Math Function2'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_Gauss_to_uT[rtb_Saturation1_j_idx_1_0] = INS_DWork.Delay_8_DSTATE[3 *
      rtb_Saturation1_j_idx_1_0 + 2] * rtb_MathFunction[2] +
      (INS_DWork.Delay_8_DSTATE[3 * rtb_Saturation1_j_idx_1_0 + 1] *
       rtb_MathFunction[1] + INS_DWork.Delay_8_DSTATE[3 *
       rtb_Saturation1_j_idx_1_0] * rtb_MathFunction[0]);
  }

  /* End of Product: '<S431>/Product8' */

  /* Update for DiscreteIntegrator: '<S436>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S436>/Constant'
   *  DiscreteIntegrator: '<S436>/Discrete-Time Integrator1'
   *  DiscreteIntegrator: '<S436>/Discrete-Time Integrator1'
   *  Gain: '<S436>/Gain'
   *  Gain: '<S436>/Gain1'
   *  Sum: '<S436>/Sum'
   *  Sum: '<S436>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE += ((rtb_Saturation_a -
    INS_DWork.DiscreteTimeIntegrator1_DSTATE) * INS_P.Gain_Gain_c -
    INS_P.Gain1_Gain_bn * INS_DWork.DiscreteTimeIntegrator_DSTATE) *
    INS_P.DiscreteTimeIntegrator_gainv_bm;
  if (INS_P.Constant_Value_fn > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_k = 1;
    INS_DWork.DiscreteTimeIntegrator1_PrevRes = 1;
  } else {
    if (INS_P.Constant_Value_fn < 0.0F) {
      INS_DWork.DiscreteTimeIntegrator_PrevRe_k = -1;
    } else if (INS_P.Constant_Value_fn == 0.0F) {
      INS_DWork.DiscreteTimeIntegrator_PrevRe_k = 0;
    } else {
      INS_DWork.DiscreteTimeIntegrator_PrevRe_k = 2;
    }

    if (INS_P.Constant_Value_fn < 0.0F) {
      INS_DWork.DiscreteTimeIntegrator1_PrevRes = -1;
    } else if (INS_P.Constant_Value_fn == 0.0F) {
      INS_DWork.DiscreteTimeIntegrator1_PrevRes = 0;
    } else {
      INS_DWork.DiscreteTimeIntegrator1_PrevRes = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S436>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S436>/Discrete-Time Integrator1' */
  INS_DWork.DiscreteTimeIntegrator1_IC_LOAD = 0U;
  INS_DWork.DiscreteTimeIntegrator1_DSTATE +=
    INS_P.DiscreteTimeIntegrator1_gainv_m * rtb_DiscreteTimeIntegrator_eh;

  /* Update for UnitDelay: '<S443>/Delay Input1' incorporates:
   *  Inport: '<Root>/MAG'
   */
  INS_DWork.DelayInput1_DSTATE_n = INS_U.MAG.timestamp;

  /* Update for DiscreteIntegrator: '<S429>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S429>/Constant'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTAT_lg +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lg = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lg = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S429>/Discrete-Time Integrator' */

  /* Update for Delay: '<S444>/Delay' */
  INS_DWork.Delay_DSTATE_fp = rtb_Switch_pt;

  /* End of Outputs for SubSystem: '<S3>/MAG_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S3>/Rangefinder_PreProcess' */
  /* DiscreteIntegrator: '<S454>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S459>/Constant1'
   *  Delay: '<S459>/Delay'
   *  Inport: '<Root>/Rangefinder'
   *  RelationalOperator: '<S458>/FixPt Relational Operator'
   *  Switch: '<S459>/Switch'
   *  UnitDelay: '<S458>/Delay Input1'
   */
  if (INS_U.Rangefinder.timestamp != INS_DWork.DelayInput1_DSTATE) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_e3 =
      INS_P.DiscreteTimeIntegrator_IC_f4;
    rtb_Switch_ox = INS_P.Constant1_Value_h;
  } else {
    rtb_Switch_ox = INS_DWork.Delay_DSTATE_j;
  }

  /* RelationalOperator: '<S462>/Compare' incorporates:
   *  Constant: '<S457>/Constant'
   *  Constant: '<S460>/Lower Limit'
   *  Constant: '<S460>/Upper Limit'
   *  Constant: '<S462>/Constant'
   *  DiscreteIntegrator: '<S454>/Discrete-Time Integrator'
   *  Inport: '<Root>/Rangefinder'
   *  Logic: '<S454>/Logical Operator1'
   *  Logic: '<S460>/AND'
   *  RelationalOperator: '<S457>/Compare'
   *  RelationalOperator: '<S460>/Lower Test'
   *  RelationalOperator: '<S460>/Upper Test'
   */
  rtb_Compare_ai = (((INS_P.Sensor_Valid_min_alt < INS_U.Rangefinder.distance) &&
                     (INS_U.Rangefinder.distance <= INS_P.Sensor_Valid_max_alt) &&
                     (INS_DWork.DiscreteTimeIntegrator_DSTAT_e3 <
                      INS_P.Sensor_Valid_timeout_p) && (rtb_Switch_ox != 0)) >
                    (int32_T)INS_P.Constant_Value_pa);

  /* DiscreteIntegrator: '<S455>/Discrete-Time Integrator' */
  if ((!rtb_Compare_ai) && (INS_DWork.DiscreteTimeIntegrator_PrevRese == 1)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_cv =
      INS_P.DiscreteTimeIntegrator_IC_n1;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_cv >=
      INS_P.DiscreteTimeIntegrator_UpperS_l) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_cv =
      INS_P.DiscreteTimeIntegrator_UpperS_l;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_cv <=
        INS_P.DiscreteTimeIntegrator_Lower_bq) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_cv =
        INS_P.DiscreteTimeIntegrator_Lower_bq;
    }
  }

  /* RelationalOperator: '<S461>/Compare' incorporates:
   *  Constant: '<S461>/Constant'
   *  DiscreteIntegrator: '<S455>/Discrete-Time Integrator'
   */
  rtb_Compare_c5 = (INS_DWork.DiscreteTimeIntegrator_DSTAT_cv >=
                    INS_P.CompareToConstant_const_m);

  /* Product: '<S456>/Multiply' incorporates:
   *  Delay: '<Root>/Delay'
   *  Inport: '<Root>/Rangefinder'
   *  Trigonometry: '<S456>/Cos'
   *  Trigonometry: '<S456>/Cos1'
   */
  rtb_Saturation_a = INS_U.Rangefinder.distance * arm_cos_f32
    (INS_DWork.Delay_2_DSTATE) * arm_cos_f32(INS_DWork.Delay_3_DSTATE);

  /* Update for UnitDelay: '<S458>/Delay Input1' incorporates:
   *  Inport: '<Root>/Rangefinder'
   */
  INS_DWork.DelayInput1_DSTATE = INS_U.Rangefinder.timestamp;

  /* Update for DiscreteIntegrator: '<S454>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S454>/Constant'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTAT_e3 +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_e3 = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_e3 = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S454>/Discrete-Time Integrator' */

  /* Update for Delay: '<S459>/Delay' */
  INS_DWork.Delay_DSTATE_j = rtb_Switch_ox;

  /* Update for DiscreteIntegrator: '<S455>/Discrete-Time Integrator' */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_cv += rtb_Compare_ai;
  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_cv >=
      INS_P.DiscreteTimeIntegrator_UpperS_l) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_cv =
      INS_P.DiscreteTimeIntegrator_UpperS_l;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_cv <=
        INS_P.DiscreteTimeIntegrator_Lower_bq) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_cv =
        INS_P.DiscreteTimeIntegrator_Lower_bq;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevRese = (int8_T)rtb_Compare_ai;

  /* End of Update for DiscreteIntegrator: '<S455>/Discrete-Time Integrator' */
  /* End of Outputs for SubSystem: '<S3>/Rangefinder_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S3>/OpticalFlow_PreProcess' */
  /* DiscreteIntegrator: '<S448>/Discrete-Time Integrator5' incorporates:
   *  Inport: '<Root>/Optical_Flow'
   */
  if (INS_DWork.DiscreteTimeIntegrator5_IC_LOAD != 0) {
    INS_DWork.DiscreteTimeIntegrator5_DSTATE[0] = INS_U.Optical_Flow.vx;
    INS_DWork.DiscreteTimeIntegrator5_DSTATE[1] = INS_U.Optical_Flow.vy;
  }

  /* Product: '<S446>/Multiply' incorporates:
   *  DiscreteIntegrator: '<S448>/Discrete-Time Integrator5'
   */
  rtb_Memory_m_idx_0 = rtb_Compare_c5 ?
    INS_DWork.DiscreteTimeIntegrator5_DSTATE[0] * rtb_Saturation_a : 0.0F;
  rtb_Memory_m_idx_1 = rtb_Compare_c5 ?
    INS_DWork.DiscreteTimeIntegrator5_DSTATE[1] * rtb_Saturation_a : 0.0F;

  /* DiscreteIntegrator: '<S447>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S451>/Constant1'
   *  Delay: '<S451>/Delay'
   *  Inport: '<Root>/Optical_Flow'
   *  RelationalOperator: '<S450>/FixPt Relational Operator'
   *  Switch: '<S451>/Switch'
   *  UnitDelay: '<S450>/Delay Input1'
   */
  if (INS_U.Optical_Flow.timestamp != INS_DWork.DelayInput1_DSTATE_k) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_g =
      INS_P.DiscreteTimeIntegrator_IC_n;
    rtb_Switch_ol = (INS_P.Constant1_Value_o0 != 0);
  } else {
    rtb_Switch_ol = INS_DWork.Delay_DSTATE_c;
  }

  /* Relay: '<S447>/Relay' incorporates:
   *  Inport: '<Root>/Optical_Flow'
   */
  if (INS_U.Optical_Flow.quality >= INS_P.Relay_OnVal_f) {
    INS_DWork.Relay_Mode = true;
  } else {
    if (INS_U.Optical_Flow.quality <= INS_P.Relay_OffVal_k) {
      INS_DWork.Relay_Mode = false;
    }
  }

  if (INS_DWork.Relay_Mode) {
    rtb_Switch_pt = INS_P.Sensor_Valid_q_high;
  } else {
    rtb_Switch_pt = INS_P.Sensor_Valid_q_low;
  }

  /* End of Relay: '<S447>/Relay' */

  /* Logic: '<S447>/Logical Operator1' incorporates:
   *  Constant: '<S449>/Constant'
   *  Constant: '<S452>/Lower Limit'
   *  Constant: '<S452>/Upper Limit'
   *  Constant: '<S453>/Lower Limit'
   *  Constant: '<S453>/Upper Limit'
   *  DiscreteIntegrator: '<S447>/Discrete-Time Integrator'
   *  Inport: '<Root>/Optical_Flow'
   *  Logic: '<S447>/Logical Operator'
   *  Logic: '<S452>/AND'
   *  Logic: '<S453>/AND'
   *  RelationalOperator: '<S449>/Compare'
   *  RelationalOperator: '<S452>/Lower Test'
   *  RelationalOperator: '<S452>/Upper Test'
   *  RelationalOperator: '<S453>/Lower Test'
   *  RelationalOperator: '<S453>/Upper Test'
   */
  rtb_Compare_ai = ((INS_P.Sensor_Valid_min_vel < INS_U.Optical_Flow.vx) &&
                    (INS_U.Optical_Flow.vx < INS_P.Sensor_Valid_max_vel) &&
                    ((INS_P.Sensor_Valid_min_vel < INS_U.Optical_Flow.vy) &&
                     (INS_U.Optical_Flow.vy < INS_P.Sensor_Valid_max_vel)) &&
                    (rtb_Switch_pt != 0) &&
                    (INS_DWork.DiscreteTimeIntegrator_DSTATE_g <
                     INS_P.Sensor_Valid_timeout_ai) && rtb_Switch_ol &&
                    rtb_Compare_c5);

  /* Update for DiscreteIntegrator: '<S448>/Discrete-Time Integrator5' incorporates:
   *  Gain: '<S448>/Gain'
   *  Inport: '<Root>/Optical_Flow'
   *  Sum: '<S448>/Sum5'
   */
  INS_DWork.DiscreteTimeIntegrator5_IC_LOAD = 0U;
  INS_DWork.DiscreteTimeIntegrator5_DSTATE[0] += (INS_U.Optical_Flow.vx -
    INS_DWork.DiscreteTimeIntegrator5_DSTATE[0]) * INS_P.Gain_Gain_ca *
    INS_P.DiscreteTimeIntegrator5_gainv_c;
  INS_DWork.DiscreteTimeIntegrator5_DSTATE[1] += (INS_U.Optical_Flow.vy -
    INS_DWork.DiscreteTimeIntegrator5_DSTATE[1]) * INS_P.Gain_Gain_ca *
    INS_P.DiscreteTimeIntegrator5_gainv_c;

  /* Update for UnitDelay: '<S450>/Delay Input1' incorporates:
   *  Inport: '<Root>/Optical_Flow'
   */
  INS_DWork.DelayInput1_DSTATE_k = INS_U.Optical_Flow.timestamp;

  /* Update for DiscreteIntegrator: '<S447>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S447>/Constant'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTATE_g +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_g = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_g = MAX_uint32_T;
  }

  /* End of Update for DiscreteIntegrator: '<S447>/Discrete-Time Integrator' */

  /* Update for Delay: '<S451>/Delay' */
  INS_DWork.Delay_DSTATE_c = rtb_Switch_ol;

  /* End of Outputs for SubSystem: '<S3>/OpticalFlow_PreProcess' */

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
  /* Outputs for Atomic SubSystem: '<S57>/Correct' */
  /* Outputs for Atomic SubSystem: '<S55>/RF_Data_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
  /* Math: '<S136>/Square' incorporates:
   *  Inport: '<Root>/IMU'
   *  Math: '<S112>/Square'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport4'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport5'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport6'
   */
  rtb_VectorConcatenate[0] = INS_U.IMU.acc_x * INS_U.IMU.acc_x;
  rtb_VectorConcatenate[1] = INS_U.IMU.acc_y * INS_U.IMU.acc_y;
  rtb_VectorConcatenate[2] = INS_U.IMU.acc_z * INS_U.IMU.acc_z;

  /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
  /* End of Outputs for SubSystem: '<S57>/Correct' */
  /* End of Outputs for SubSystem: '<S55>/AHRS' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

  /* Sqrt: '<S136>/Sqrt' incorporates:
   *  Math: '<S136>/Square'
   *  Sum: '<S136>/Sum of Elements'
   */
  rtb_dec_rad = sqrtf((rtb_VectorConcatenate[0] + rtb_VectorConcatenate[1]) +
                      rtb_VectorConcatenate[2]);

  /* Sum: '<S138>/Add' incorporates:
   *  Constant: '<S131>/Constant'
   *  Constant: '<S132>/Constant'
   *  Constant: '<S134>/Lower Limit'
   *  Constant: '<S134>/Upper Limit'
   *  DataTypeConversion: '<S138>/Data Type Conversion'
   *  Delay: '<S138>/Delay'
   *  Logic: '<S128>/Logical Operator1'
   *  Logic: '<S134>/AND'
   *  Math: '<S137>/Square'
   *  RelationalOperator: '<S131>/Compare'
   *  RelationalOperator: '<S132>/Compare'
   *  RelationalOperator: '<S134>/Lower Test'
   *  RelationalOperator: '<S134>/Upper Test'
   *  Sqrt: '<S137>/Sqrt'
   *  Sum: '<S137>/Sum of Elements'
   */
  rtb_Sum1 = (rtb_FixPtRelationalOperator_nc && (rtb_MathFunction1 >=
    INS_P.CompareToConstant1_const) && ((INS_P.IntervalTest_lowlimit <=
    rtb_dec_rad) && (rtb_dec_rad <= INS_P.IntervalTest_uplimit)) && (sqrtf
    ((rtb_Gauss_to_uT[0] * rtb_Gauss_to_uT[0] + rtb_Gauss_to_uT[1] *
      rtb_Gauss_to_uT[1]) + rtb_Gauss_to_uT[2] * rtb_Gauss_to_uT[2]) >
    INS_P.CompareToConstant_const_p)) + INS_DWork.Delay_DSTATE_i;

  /* Saturate: '<S138>/Saturation' */
  if (rtb_Sum1 > INS_P.Saturation_UpperSat_k5) {
    rtb_Sum1 = INS_P.Saturation_UpperSat_k5;
  } else {
    if (rtb_Sum1 < INS_P.Saturation_LowerSat_hb) {
      rtb_Sum1 = INS_P.Saturation_LowerSat_hb;
    }
  }

  /* End of Saturate: '<S138>/Saturation' */

  /* RelationalOperator: '<S142>/Compare' incorporates:
   *  Constant: '<S142>/Constant'
   */
  rtb_WGS84_pos_valid = (rtb_Sum1 > INS_P.valid_samples_const_k);

  /* RelationalOperator: '<S139>/Compare' incorporates:
   *  Constant: '<S139>/Constant'
   */
  rtb_Compare_o = ((int32_T)rtb_WGS84_pos_valid > (int32_T)
                   INS_P.Constant_Value_af);

  /* Sum: '<S135>/Add' incorporates:
   *  DataTypeConversion: '<S135>/Data Type Conversion'
   *  Delay: '<S135>/Delay'
   */
  rtb_Sum1_o = rtb_Compare_cio + INS_DWork.Delay_DSTATE_n;

  /* Saturate: '<S135>/Saturation' */
  if (rtb_Sum1_o > INS_P.Saturation_UpperSat_p) {
    rtb_Sum1_o = INS_P.Saturation_UpperSat_p;
  } else {
    if (rtb_Sum1_o < INS_P.Saturation_LowerSat_mo) {
      rtb_Sum1_o = INS_P.Saturation_LowerSat_mo;
    }
  }

  /* End of Saturate: '<S135>/Saturation' */

  /* RelationalOperator: '<S141>/Compare' incorporates:
   *  Constant: '<S141>/Constant'
   */
  rtb_Compare_jx = (rtb_Sum1_o > INS_P.Constant_Value_m);

  /* Logic: '<S128>/Logical Operator2' incorporates:
   *  Logic: '<S128>/Logical Operator'
   *  RelationalOperator: '<S133>/FixPt Relational Operator'
   *  RelationalOperator: '<S140>/FixPt Relational Operator'
   *  UnitDelay: '<S133>/Delay Input1'
   *  UnitDelay: '<S140>/Delay Input1'
   */
  rtb_Switch_ol = (((int32_T)rtb_Compare_o > (int32_T)
                    INS_DWork.DelayInput1_DSTATE_pr) || (rtb_WGS84_pos_valid &&
    ((int32_T)rtb_Compare_jx > (int32_T)INS_DWork.DelayInput1_DSTATE_mm)));

  /* Outputs for Enabled SubSystem: '<S58>/Initial_Attitude' incorporates:
   *  EnablePort: '<S129>/Enable'
   */
  if (rtb_Switch_ol) {
    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
    /* Gain: '<S129>/Gain' incorporates:
     *  Inport: '<Root>/IMU'
     *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport4'
     *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport5'
     *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport6'
     */
    rtb_Gain_ok[0] = INS_P.Gain_Gain_d * INS_U.IMU.acc_x;
    rtb_Gain_ok[1] = INS_P.Gain_Gain_d * INS_U.IMU.acc_y;
    rtb_Gain_ok[2] = INS_P.Gain_Gain_d * INS_U.IMU.acc_z;

    /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Sum: '<S143>/Sum' incorporates:
     *  Product: '<S149>/Multiply'
     *  Product: '<S149>/Multiply1'
     *  Product: '<S149>/Multiply2'
     *  Product: '<S150>/Multiply3'
     *  Product: '<S150>/Multiply4'
     *  Product: '<S150>/Multiply5'
     */
    rtb_Sum_gn_idx_0 = rtb_Gain_ok[1] * rtb_Gauss_to_uT[2] - rtb_Gain_ok[2] *
      rtb_Gauss_to_uT[1];
    rtb_Sum_gn_idx_1 = rtb_Gain_ok[2] * rtb_Gauss_to_uT[0] - rtb_Gain_ok[0] *
      rtb_Gauss_to_uT[2];
    rtb_Sum_gn_idx_2 = rtb_Gain_ok[0] * rtb_Gauss_to_uT[1] - rtb_Gain_ok[1] *
      rtb_Gauss_to_uT[0];

    /* Sum: '<S144>/Sum' incorporates:
     *  Product: '<S151>/Multiply'
     *  Product: '<S152>/Multiply3'
     */
    rtb_Switch_kj_idx_2 = rtb_Sum_gn_idx_1 * rtb_Gain_ok[2] - rtb_Sum_gn_idx_2 *
      rtb_Gain_ok[1];

    /* Math: '<S146>/Math Function' */
    rtb_DiscreteTimeIntegrator_g = rtb_Switch_kj_idx_2 * rtb_Switch_kj_idx_2;

    /* Sum: '<S144>/Sum' incorporates:
     *  Product: '<S151>/Multiply1'
     *  Product: '<S152>/Multiply4'
     */
    rtb_Sum_p_idx_0 = rtb_Switch_kj_idx_2;
    rtb_Switch_kj_idx_2 = rtb_Sum_gn_idx_2 * rtb_Gain_ok[0] - rtb_Sum_gn_idx_0 *
      rtb_Gain_ok[2];

    /* Math: '<S146>/Math Function' */
    rtb_MathFunction_e_idx_1 = rtb_Switch_kj_idx_2 * rtb_Switch_kj_idx_2;

    /* Sum: '<S144>/Sum' incorporates:
     *  Product: '<S151>/Multiply2'
     *  Product: '<S152>/Multiply5'
     */
    rtb_Sum_p_idx_1 = rtb_Switch_kj_idx_2;
    rtb_Switch_kj_idx_2 = rtb_Sum_gn_idx_0 * rtb_Gain_ok[1] - rtb_Sum_gn_idx_1 *
      rtb_Gain_ok[0];

    /* Sum: '<S146>/Sum of Elements' incorporates:
     *  Math: '<S146>/Math Function'
     */
    rtb_dec_rad = (rtb_DiscreteTimeIntegrator_g + rtb_MathFunction_e_idx_1) +
      rtb_Switch_kj_idx_2 * rtb_Switch_kj_idx_2;

    /* Math: '<S146>/Math Function1'
     *
     * About '<S146>/Math Function1':
     *  Operator: sqrt
     */
    if (rtb_dec_rad < 0.0F) {
      rtb_dec_rad = -sqrtf(fabsf(rtb_dec_rad));
    } else {
      rtb_dec_rad = sqrtf(rtb_dec_rad);
    }

    /* End of Math: '<S146>/Math Function1' */

    /* Switch: '<S146>/Switch' incorporates:
     *  Constant: '<S146>/Constant'
     *  Product: '<S146>/Product'
     */
    if (rtb_dec_rad > INS_P.Switch_Threshold_a) {
      rtb_Switch_kj_idx_3 = rtb_dec_rad;
    } else {
      rtb_Sum_p_idx_0 = 0.0F;
      rtb_Sum_p_idx_1 = 0.0F;
      rtb_Switch_kj_idx_2 = 0.0F;
      rtb_Switch_kj_idx_3 = INS_P.Constant_Value_h1;
    }

    /* End of Switch: '<S146>/Switch' */

    /* Product: '<S146>/Divide' */
    rtb_VectorConcatenate_h[0] = rtb_Sum_p_idx_0 / rtb_Switch_kj_idx_3;
    rtb_VectorConcatenate_h[1] = rtb_Sum_p_idx_1 / rtb_Switch_kj_idx_3;
    rtb_VectorConcatenate_h[2] = rtb_Switch_kj_idx_2 / rtb_Switch_kj_idx_3;

    /* Sum: '<S147>/Sum of Elements' incorporates:
     *  Math: '<S147>/Math Function'
     */
    rtb_dec_rad = (rtb_Sum_gn_idx_0 * rtb_Sum_gn_idx_0 + rtb_Sum_gn_idx_1 *
                   rtb_Sum_gn_idx_1) + rtb_Sum_gn_idx_2 * rtb_Sum_gn_idx_2;

    /* Math: '<S147>/Math Function1'
     *
     * About '<S147>/Math Function1':
     *  Operator: sqrt
     */
    if (rtb_dec_rad < 0.0F) {
      rtb_dec_rad = -sqrtf(fabsf(rtb_dec_rad));
    } else {
      rtb_dec_rad = sqrtf(rtb_dec_rad);
    }

    /* End of Math: '<S147>/Math Function1' */

    /* Switch: '<S147>/Switch' incorporates:
     *  Constant: '<S147>/Constant'
     *  Product: '<S147>/Product'
     */
    if (rtb_dec_rad > INS_P.Switch_Threshold_f) {
      rtb_Sum_p_idx_0 = rtb_Sum_gn_idx_0;
      rtb_Sum_p_idx_1 = rtb_Sum_gn_idx_1;
      rtb_Switch_kj_idx_2 = rtb_Sum_gn_idx_2;
      rtb_Switch_kj_idx_3 = rtb_dec_rad;
    } else {
      rtb_Sum_p_idx_0 = 0.0F;
      rtb_Sum_p_idx_1 = 0.0F;
      rtb_Switch_kj_idx_2 = 0.0F;
      rtb_Switch_kj_idx_3 = INS_P.Constant_Value_aee;
    }

    /* End of Switch: '<S147>/Switch' */

    /* Product: '<S147>/Divide' */
    rtb_VectorConcatenate_h[3] = rtb_Sum_p_idx_0 / rtb_Switch_kj_idx_3;
    rtb_VectorConcatenate_h[4] = rtb_Sum_p_idx_1 / rtb_Switch_kj_idx_3;
    rtb_VectorConcatenate_h[5] = rtb_Switch_kj_idx_2 / rtb_Switch_kj_idx_3;

    /* Sum: '<S148>/Sum of Elements' incorporates:
     *  Math: '<S148>/Math Function'
     */
    rtb_dec_rad = (rtb_Gain_ok[0] * rtb_Gain_ok[0] + rtb_Gain_ok[1] *
                   rtb_Gain_ok[1]) + rtb_Gain_ok[2] * rtb_Gain_ok[2];

    /* Math: '<S148>/Math Function1'
     *
     * About '<S148>/Math Function1':
     *  Operator: sqrt
     */
    if (rtb_dec_rad < 0.0F) {
      rtb_dec_rad = -sqrtf(fabsf(rtb_dec_rad));
    } else {
      rtb_dec_rad = sqrtf(rtb_dec_rad);
    }

    /* End of Math: '<S148>/Math Function1' */

    /* Switch: '<S148>/Switch' incorporates:
     *  Constant: '<S148>/Constant'
     *  Product: '<S148>/Product'
     */
    if (rtb_dec_rad > INS_P.Switch_Threshold_mm) {
      rtb_Sum_p_idx_0 = rtb_Gain_ok[0];
      rtb_Sum_p_idx_1 = rtb_Gain_ok[1];
      rtb_Switch_kj_idx_2 = rtb_Gain_ok[2];
      rtb_Switch_kj_idx_3 = rtb_dec_rad;
    } else {
      rtb_Sum_p_idx_0 = 0.0F;
      rtb_Sum_p_idx_1 = 0.0F;
      rtb_Switch_kj_idx_2 = 0.0F;
      rtb_Switch_kj_idx_3 = INS_P.Constant_Value_hp;
    }

    /* End of Switch: '<S148>/Switch' */

    /* Product: '<S148>/Divide' */
    rtb_VectorConcatenate_h[6] = rtb_Sum_p_idx_0 / rtb_Switch_kj_idx_3;
    rtb_VectorConcatenate_h[7] = rtb_Sum_p_idx_1 / rtb_Switch_kj_idx_3;
    rtb_VectorConcatenate_h[8] = rtb_Switch_kj_idx_2 / rtb_Switch_kj_idx_3;

    /* Sum: '<S153>/Add' */
    rtb_Switch_kj_idx_2 = (rtb_VectorConcatenate_h[0] + rtb_VectorConcatenate_h
      [4]) + rtb_VectorConcatenate_h[8];

    /* If: '<S145>/If' incorporates:
     *  If: '<S154>/Find Maximum Diagonal Value'
     */
    if (rtb_Switch_kj_idx_2 > 0.0F) {
      /* Outputs for IfAction SubSystem: '<S145>/Positive Trace' incorporates:
       *  ActionPort: '<S155>/Action Port'
       */
      /* Sqrt: '<S155>/sqrt' incorporates:
       *  Constant: '<S155>/Constant'
       *  Sum: '<S155>/Sum'
       */
      rtb_dec_rad = sqrtf(rtb_Switch_kj_idx_2 + INS_P.Constant_Value_c0);

      /* Gain: '<S155>/Gain' */
      INS_B.Merge_l[0] = INS_P.Gain_Gain_eu * rtb_dec_rad;

      /* Gain: '<S155>/Gain1' */
      rtb_dec_rad *= INS_P.Gain1_Gain_h;

      /* Product: '<S155>/Product' incorporates:
       *  Sum: '<S175>/Add'
       *  Sum: '<S176>/Add'
       *  Sum: '<S177>/Add'
       */
      INS_B.Merge_l[1] = (rtb_VectorConcatenate_h[7] - rtb_VectorConcatenate_h[5])
        / rtb_dec_rad;
      INS_B.Merge_l[2] = (rtb_VectorConcatenate_h[2] - rtb_VectorConcatenate_h[6])
        / rtb_dec_rad;
      INS_B.Merge_l[3] = (rtb_VectorConcatenate_h[3] - rtb_VectorConcatenate_h[1])
        / rtb_dec_rad;

      /* End of Outputs for SubSystem: '<S145>/Positive Trace' */
    } else {
      /* Outputs for IfAction SubSystem: '<S145>/Negative Trace' incorporates:
       *  ActionPort: '<S154>/Action Port'
       */
      if ((rtb_VectorConcatenate_h[4] > rtb_VectorConcatenate_h[0]) &&
          (rtb_VectorConcatenate_h[4] > rtb_VectorConcatenate_h[8])) {
        /* Outputs for IfAction SubSystem: '<S154>/Maximum Value at DCM(2,2)' incorporates:
         *  ActionPort: '<S157>/Action Port'
         */
        /* If: '<S154>/Find Maximum Diagonal Value' incorporates:
         *  Constant: '<S168>/Constant1'
         *  Constant: '<S168>/Constant2'
         *  Constant: '<S169>/Constant'
         *  Gain: '<S157>/Gain'
         *  Gain: '<S157>/Gain1'
         *  Gain: '<S157>/Gain3'
         *  Gain: '<S157>/Gain4'
         *  Product: '<S157>/Product'
         *  Product: '<S168>/Product'
         *  Sqrt: '<S157>/sqrt'
         *  Sum: '<S165>/Add'
         *  Sum: '<S166>/Add'
         *  Sum: '<S167>/Add'
         *  Sum: '<S169>/Add'
         *  Switch: '<S168>/Switch'
         */
        rtb_dec_rad = sqrtf(((rtb_VectorConcatenate_h[4] -
                              rtb_VectorConcatenate_h[0]) -
                             rtb_VectorConcatenate_h[8]) +
                            INS_P.Constant_Value_ae);
        INS_B.Merge_l[2] = INS_P.Gain_Gain_k * rtb_dec_rad;
        if (rtb_dec_rad != 0.0F) {
          rtb_DiscreteTimeIntegrator_g = INS_P.Constant1_Value_e;
        } else {
          rtb_DiscreteTimeIntegrator_g = INS_P.Constant2_Value_az[0];
          rtb_dec_rad = INS_P.Constant2_Value_az[1];
        }

        rtb_dec_rad = rtb_DiscreteTimeIntegrator_g / rtb_dec_rad;
        INS_B.Merge_l[1] = INS_P.Gain1_Gain_g4 * ((rtb_VectorConcatenate_h[1] +
          rtb_VectorConcatenate_h[3]) * rtb_dec_rad);
        INS_B.Merge_l[3] = INS_P.Gain3_Gain * ((rtb_VectorConcatenate_h[5] +
          rtb_VectorConcatenate_h[7]) * rtb_dec_rad);
        INS_B.Merge_l[0] = INS_P.Gain4_Gain * ((rtb_VectorConcatenate_h[2] -
          rtb_VectorConcatenate_h[6]) * rtb_dec_rad);

        /* End of Outputs for SubSystem: '<S154>/Maximum Value at DCM(2,2)' */
      } else if (rtb_VectorConcatenate_h[8] > rtb_VectorConcatenate_h[0]) {
        /* Outputs for IfAction SubSystem: '<S154>/Maximum Value at DCM(3,3)' incorporates:
         *  ActionPort: '<S158>/Action Port'
         */
        /* If: '<S154>/Find Maximum Diagonal Value' incorporates:
         *  Constant: '<S173>/Constant1'
         *  Constant: '<S173>/Constant2'
         *  Constant: '<S174>/Constant'
         *  Gain: '<S158>/Gain'
         *  Gain: '<S158>/Gain1'
         *  Gain: '<S158>/Gain2'
         *  Gain: '<S158>/Gain3'
         *  Product: '<S158>/Product'
         *  Product: '<S173>/Product'
         *  Sqrt: '<S158>/sqrt'
         *  Sum: '<S170>/Add'
         *  Sum: '<S171>/Add'
         *  Sum: '<S172>/Add'
         *  Sum: '<S174>/Add'
         *  Switch: '<S173>/Switch'
         */
        rtb_dec_rad = sqrtf(((rtb_VectorConcatenate_h[8] -
                              rtb_VectorConcatenate_h[0]) -
                             rtb_VectorConcatenate_h[4]) +
                            INS_P.Constant_Value_f2);
        INS_B.Merge_l[3] = INS_P.Gain_Gain_l * rtb_dec_rad;
        if (rtb_dec_rad != 0.0F) {
          rtb_DiscreteTimeIntegrator_g = INS_P.Constant1_Value_l;
        } else {
          rtb_DiscreteTimeIntegrator_g = INS_P.Constant2_Value_o[0];
          rtb_dec_rad = INS_P.Constant2_Value_o[1];
        }

        rtb_dec_rad = rtb_DiscreteTimeIntegrator_g / rtb_dec_rad;
        INS_B.Merge_l[1] = INS_P.Gain1_Gain_m * ((rtb_VectorConcatenate_h[2] +
          rtb_VectorConcatenate_h[6]) * rtb_dec_rad);
        INS_B.Merge_l[2] = INS_P.Gain2_Gain_o * ((rtb_VectorConcatenate_h[5] +
          rtb_VectorConcatenate_h[7]) * rtb_dec_rad);
        INS_B.Merge_l[0] = INS_P.Gain3_Gain_e * ((rtb_VectorConcatenate_h[3] -
          rtb_VectorConcatenate_h[1]) * rtb_dec_rad);

        /* End of Outputs for SubSystem: '<S154>/Maximum Value at DCM(3,3)' */
      } else {
        /* Outputs for IfAction SubSystem: '<S154>/Maximum Value at DCM(1,1)' incorporates:
         *  ActionPort: '<S156>/Action Port'
         */
        /* If: '<S154>/Find Maximum Diagonal Value' incorporates:
         *  Constant: '<S163>/Constant1'
         *  Constant: '<S163>/Constant2'
         *  Constant: '<S164>/Constant'
         *  Gain: '<S156>/Gain'
         *  Gain: '<S156>/Gain1'
         *  Gain: '<S156>/Gain2'
         *  Gain: '<S156>/Gain3'
         *  Product: '<S156>/Product'
         *  Product: '<S163>/Product'
         *  Sqrt: '<S156>/sqrt'
         *  Sum: '<S160>/Add'
         *  Sum: '<S161>/Add'
         *  Sum: '<S162>/Add'
         *  Sum: '<S164>/Add'
         *  Switch: '<S163>/Switch'
         */
        rtb_dec_rad = sqrtf(((rtb_VectorConcatenate_h[0] -
                              rtb_VectorConcatenate_h[4]) -
                             rtb_VectorConcatenate_h[8]) +
                            INS_P.Constant_Value_hd);
        INS_B.Merge_l[1] = INS_P.Gain_Gain_g * rtb_dec_rad;
        if (rtb_dec_rad != 0.0F) {
          rtb_DiscreteTimeIntegrator_g = INS_P.Constant1_Value_a;
        } else {
          rtb_DiscreteTimeIntegrator_g = INS_P.Constant2_Value_m[0];
          rtb_dec_rad = INS_P.Constant2_Value_m[1];
        }

        rtb_dec_rad = rtb_DiscreteTimeIntegrator_g / rtb_dec_rad;
        INS_B.Merge_l[2] = INS_P.Gain1_Gain_ig * ((rtb_VectorConcatenate_h[1] +
          rtb_VectorConcatenate_h[3]) * rtb_dec_rad);
        INS_B.Merge_l[3] = INS_P.Gain2_Gain_m * ((rtb_VectorConcatenate_h[2] +
          rtb_VectorConcatenate_h[6]) * rtb_dec_rad);
        INS_B.Merge_l[0] = INS_P.Gain3_Gain_ea * ((rtb_VectorConcatenate_h[7] -
          rtb_VectorConcatenate_h[5]) * rtb_dec_rad);

        /* End of Outputs for SubSystem: '<S154>/Maximum Value at DCM(1,1)' */
      }

      /* End of Outputs for SubSystem: '<S145>/Negative Trace' */
    }

    /* End of If: '<S145>/If' */

    /* SignalConversion: '<S129>/OutportBufferForquat_0' */
    INS_B.OutportBufferForquat_0[0] = INS_B.Merge_l[0];
    INS_B.OutportBufferForquat_0[1] = INS_B.Merge_l[1];
    INS_B.OutportBufferForquat_0[2] = INS_B.Merge_l[2];
    INS_B.OutportBufferForquat_0[3] = INS_B.Merge_l[3];
  }

  /* End of Outputs for SubSystem: '<S58>/Initial_Attitude' */

  /* DiscreteIntegrator: '<S181>/Discrete-Time Integrator5' incorporates:
   *  Inport: '<Root>/IMU'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport1'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport2'
   */
  if (INS_DWork.DiscreteTimeIntegrator5_IC_LO_p != 0) {
    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
    INS_DWork.DiscreteTimeIntegrator5_DSTAT_o[0] = INS_U.IMU.gyr_x;
    INS_DWork.DiscreteTimeIntegrator5_DSTAT_o[1] = INS_U.IMU.gyr_y;

    /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */
  }

  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
  /* Sum: '<S178>/Subtract' incorporates:
   *  DiscreteIntegrator: '<S181>/Discrete-Time Integrator5'
   *  Inport: '<Root>/IMU'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport1'
   *  Sum: '<S181>/Sum5'
   */
  rtb_Sum_p_idx_1 = INS_U.IMU.gyr_x - INS_DWork.DiscreteTimeIntegrator5_DSTAT_o
    [0];

  /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

  /* Abs: '<S130>/Abs' */
  rtb_Abs_h_idx_0 = fabsf(rtb_Sum_p_idx_1);

  /* End of Outputs for SubSystem: '<S55>/RF_Data_PreProcess' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */
  rtb_DiscreteTimeIntegrator_g = rtb_Sum_p_idx_1;

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S55>/RF_Data_PreProcess' */
  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
  /* Sum: '<S178>/Subtract' incorporates:
   *  DiscreteIntegrator: '<S181>/Discrete-Time Integrator5'
   *  Inport: '<Root>/IMU'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport2'
   *  Sum: '<S181>/Sum5'
   */
  rtb_Sum_p_idx_1 = INS_U.IMU.gyr_y - INS_DWork.DiscreteTimeIntegrator5_DSTAT_o
    [1];

  /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

  /* MinMax: '<S130>/MinMax1' incorporates:
   *  Abs: '<S130>/Abs'
   */
  rtb_Switch_kj_idx_2 = fmaxf(rtb_Abs_h_idx_0, fabsf(rtb_Sum_p_idx_1));

  /* DiscreteIntegrator: '<S179>/Discrete-Time Integrator5' incorporates:
   *  MinMax: '<S130>/MinMax1'
   */
  if (INS_DWork.DiscreteTimeIntegrator5_IC_LO_n != 0) {
    INS_DWork.DiscreteTimeIntegrator5_DSTAT_m = rtb_Switch_kj_idx_2;
  }

  /* Saturate: '<S130>/Saturation2' */
  if (INS_DWork.DiscreteTimeIntegrator5_DSTAT_m > INS_P.Saturation2_UpperSat_i)
  {
    rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation2_UpperSat_i;
  } else if (INS_DWork.DiscreteTimeIntegrator5_DSTAT_m <
             INS_P.Saturation2_LowerSat_g) {
    rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation2_LowerSat_g;
  } else {
    rtb_DiscreteTimeIntegrator_eh = INS_DWork.DiscreteTimeIntegrator5_DSTAT_m;
  }

  /* End of Saturate: '<S130>/Saturation2' */

  /* DiscreteIntegrator: '<S180>/Discrete-Time Integrator5' */
  if (INS_DWork.DiscreteTimeIntegrator5_IC_L_ns != 0) {
    INS_DWork.DiscreteTimeIntegrator5_DSTA_ow = rtb_DiscreteTimeIntegrator_eh;
  }

  /* Relay: '<S130>/Relay' incorporates:
   *  DiscreteIntegrator: '<S180>/Discrete-Time Integrator5'
   */
  if (INS_DWork.DiscreteTimeIntegrator5_DSTA_ow >= INS_P.Relay_OnVal_g) {
    INS_DWork.Relay_Mode_n5 = true;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator5_DSTA_ow <= INS_P.Relay_OffVal_f) {
      INS_DWork.Relay_Mode_n5 = false;
    }
  }

  if (INS_DWork.Relay_Mode_n5) {
    rtb_Abs_h_idx_0 = INS_P.Relay_YOn_k;
  } else {
    rtb_Abs_h_idx_0 = INS_P.Relay_YOff_f;
  }

  /* End of Relay: '<S130>/Relay' */

  /* Update for UnitDelay: '<S133>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_pr = rtb_Compare_o;

  /* Update for Delay: '<S138>/Delay' */
  INS_DWork.Delay_DSTATE_i = rtb_Sum1;

  /* Update for Delay: '<S135>/Delay' */
  INS_DWork.Delay_DSTATE_n = rtb_Sum1_o;

  /* Update for UnitDelay: '<S140>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_mm = rtb_Compare_jx;

  /* Update for DiscreteIntegrator: '<S181>/Discrete-Time Integrator5' incorporates:
   *  Gain: '<S181>/Gain'
   *  Sum: '<S181>/Sum5'
   */
  INS_DWork.DiscreteTimeIntegrator5_IC_LO_p = 0U;
  INS_DWork.DiscreteTimeIntegrator5_DSTAT_o[0] += INS_P.Gain_Gain_fr *
    rtb_DiscreteTimeIntegrator_g * INS_P.DiscreteTimeIntegrator5_gainval;
  INS_DWork.DiscreteTimeIntegrator5_DSTAT_o[1] += INS_P.Gain_Gain_fr *
    rtb_Sum_p_idx_1 * INS_P.DiscreteTimeIntegrator5_gainval;

  /* Update for DiscreteIntegrator: '<S179>/Discrete-Time Integrator5' incorporates:
   *  Gain: '<S179>/Gain'
   *  MinMax: '<S130>/MinMax1'
   *  Sum: '<S179>/Sum5'
   */
  INS_DWork.DiscreteTimeIntegrator5_IC_LO_n = 0U;
  INS_DWork.DiscreteTimeIntegrator5_DSTAT_m += (rtb_Switch_kj_idx_2 -
    INS_DWork.DiscreteTimeIntegrator5_DSTAT_m) * INS_P.Gain_Gain_je *
    INS_P.DiscreteTimeIntegrator5_gainv_n;

  /* Update for DiscreteIntegrator: '<S180>/Discrete-Time Integrator5' incorporates:
   *  Gain: '<S180>/Gain'
   *  Sum: '<S180>/Sum5'
   */
  INS_DWork.DiscreteTimeIntegrator5_IC_L_ns = 0U;
  INS_DWork.DiscreteTimeIntegrator5_DSTA_ow += (rtb_DiscreteTimeIntegrator_eh -
    INS_DWork.DiscreteTimeIntegrator5_DSTA_ow) * INS_P.Gain_Gain_h *
    INS_P.DiscreteTimeIntegrator5_gainv_m;

  /* End of Outputs for SubSystem: '<S55>/RF_Data_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
  /* Outputs for Atomic SubSystem: '<S57>/Correct' */
  /* Product: '<S87>/Multiply' incorporates:
   *  Delay: '<S57>/Delay'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_Gain_ok[rtb_Saturation1_j_idx_1_0] =
      INS_DWork.Delay_8_DSTATE_l[rtb_Saturation1_j_idx_1_0 + 6] *
      rtb_VectorConcatenate1[2] +
      (INS_DWork.Delay_8_DSTATE_l[rtb_Saturation1_j_idx_1_0 + 3] *
       rtb_VectorConcatenate1[1] +
       INS_DWork.Delay_8_DSTATE_l[rtb_Saturation1_j_idx_1_0] *
       rtb_VectorConcatenate1[0]);
  }

  /* End of Product: '<S87>/Multiply' */

  /* DiscreteIntegrator: '<S89>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S89>/Constant'
   */
  if (INS_DWork.DiscreteTimeIntegrator1_IC_LO_i != 0) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[0] = rtb_Gain_ok[0];
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[1] = rtb_Gain_ok[1];
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[2] = rtb_Gain_ok[2];
  }

  if ((INS_P.Constant_Value_g3 != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator1_PrevR_p != 0)) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[0] = rtb_Gain_ok[0];
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[1] = rtb_Gain_ok[1];
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[2] = rtb_Gain_ok[2];
  }

  rtb_Sum_gn_idx_0 = INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[0];
  rtb_Sum_gn_idx_1 = INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[1];
  rtb_Sum_gn_idx_2 = INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[2];

  /* Relay: '<S93>/Relay' */
  if (rtb_Product2 >= INS_P.Relay_OnVal) {
    INS_DWork.Relay_Mode_nf = true;
  } else {
    if (rtb_Product2 <= INS_P.Relay_OffVal) {
      INS_DWork.Relay_Mode_nf = false;
    }
  }

  if (INS_DWork.Relay_Mode_nf) {
    rtb_Sum_p_idx_1 = INS_P.Relay_YOn;
  } else {
    rtb_Sum_p_idx_1 = INS_P.Relay_YOff;
  }

  /* End of Relay: '<S93>/Relay' */

  /* Logic: '<S93>/Logical Operator1' */
  rtb_Compare_o = (rtb_Compare_cio && (rtb_Sum_p_idx_1 != 0.0F));

  /* Product: '<S87>/Multiply2' incorporates:
   *  Constant: '<S87>/GPS_Delay'
   */
  rtb_Multiply2 = rtb_Compare_o ? (real32_T)INS_P.GPS_Delay_Value : 0.0F;

  /* Delay: '<S87>/Delay' incorporates:
   *  DiscreteIntegrator: '<S89>/Discrete-Time Integrator1'
   */
  if (rtb_Multiply2 < 1.0F) {
    rtb_DiscreteTimeIntegrator_g = INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[0];
    rtb_MathFunction_e_idx_1 = INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[1];
    rtb_MathFunction_e_idx_2 = INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[2];
  } else {
    if (rtb_Multiply2 > 200.0F) {
      rtb_Saturation1_j_idx_0 = 200;
    } else {
      rtb_Saturation1_j_idx_0 = (int32_T)fmodf(rtb_Multiply2, 4.2949673E+9F);
    }

    rtb_Saturation1_j_idx_0 = (int32_T)(200U - rtb_Saturation1_j_idx_0) * 3;
    rtb_DiscreteTimeIntegrator_g =
      INS_DWork.Delay_DSTATE_lv[rtb_Saturation1_j_idx_0];
    rtb_MathFunction_e_idx_1 = INS_DWork.Delay_DSTATE_lv[1 +
      rtb_Saturation1_j_idx_0];
    rtb_MathFunction_e_idx_2 = INS_DWork.Delay_DSTATE_lv[2 +
      rtb_Saturation1_j_idx_0];
  }

  /* End of Delay: '<S87>/Delay' */

  /* RelationalOperator: '<S91>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S91>/Delay Input1'
   */
  rtb_WGS84_pos_valid = ((int32_T)rtb_Compare_o > (int32_T)
    INS_DWork.DelayInput1_DSTATE_ff);

  /* Outputs for Enabled SubSystem: '<S88>/GPS_Meas_Acc' incorporates:
   *  EnablePort: '<S92>/Enable'
   */
  if (rtb_Compare_o) {
    if (!INS_DWork.GPS_Meas_Acc_MODE) {
      /* InitializeConditions for DiscreteIntegrator: '<S92>/Integrator' */
      INS_DWork.Integrator_DSTATE[0] = INS_P.Integrator_IC;
      INS_DWork.Integrator_DSTATE[1] = INS_P.Integrator_IC;
      INS_DWork.Integrator_DSTATE[2] = INS_P.Integrator_IC;
      INS_DWork.Integrator_PrevResetState = 0;

      /* InitializeConditions for DiscreteIntegrator: '<S92>/Integrator1' */
      INS_DWork.Integrator1_IC_LOADING = 1U;
      INS_DWork.Integrator1_PrevResetState = 0;
      INS_DWork.GPS_Meas_Acc_MODE = true;
    }

    /* DiscreteIntegrator: '<S92>/Integrator' */
    if (rtb_WGS84_pos_valid || (INS_DWork.Integrator_PrevResetState != 0)) {
      INS_DWork.Integrator_DSTATE[0] = INS_P.Integrator_IC;
      INS_DWork.Integrator_DSTATE[1] = INS_P.Integrator_IC;
      INS_DWork.Integrator_DSTATE[2] = INS_P.Integrator_IC;
    }

    INS_B.Integrator[0] = INS_DWork.Integrator_DSTATE[0];
    INS_B.Integrator[1] = INS_DWork.Integrator_DSTATE[1];
    INS_B.Integrator[2] = INS_DWork.Integrator_DSTATE[2];

    /* End of DiscreteIntegrator: '<S92>/Integrator' */

    /* DiscreteIntegrator: '<S92>/Integrator1' */
    if (INS_DWork.Integrator1_IC_LOADING != 0) {
      INS_DWork.Integrator1_DSTATE[0] = rtb_Divide1;
      INS_DWork.Integrator1_DSTATE[1] = rtb_Sum2_by;
      INS_DWork.Integrator1_DSTATE[2] = rtb_Gain2_a;
    }

    if (rtb_WGS84_pos_valid || (INS_DWork.Integrator1_PrevResetState != 0)) {
      INS_DWork.Integrator1_DSTATE[0] = rtb_Divide1;
      INS_DWork.Integrator1_DSTATE[1] = rtb_Sum2_by;
      INS_DWork.Integrator1_DSTATE[2] = rtb_Gain2_a;
    }

    /* Sum: '<S92>/Sum1' incorporates:
     *  DiscreteIntegrator: '<S92>/Integrator1'
     */
    rtb_Sum_p_idx_0 = rtb_Divide1 - INS_DWork.Integrator1_DSTATE[0];
    rtb_Sum_p_idx_1 = rtb_Sum2_by - INS_DWork.Integrator1_DSTATE[1];
    rtb_Switch_kj_idx_3 = rtb_Gain2_a - INS_DWork.Integrator1_DSTATE[2];

    /* Update for DiscreteIntegrator: '<S92>/Integrator' */
    INS_DWork.Integrator_PrevResetState = (int8_T)rtb_WGS84_pos_valid;

    /* Update for DiscreteIntegrator: '<S92>/Integrator1' */
    INS_DWork.Integrator1_IC_LOADING = 0U;

    /* Update for DiscreteIntegrator: '<S92>/Integrator' incorporates:
     *  Gain: '<S92>/gain1'
     */
    INS_DWork.Integrator_DSTATE[0] += INS_P.gain1_Gain * rtb_Sum_p_idx_0 *
      INS_P.Integrator_gainval;

    /* Update for DiscreteIntegrator: '<S92>/Integrator1' incorporates:
     *  Gain: '<S92>/gain'
     *  Gain: '<S92>/gain1'
     *  Sum: '<S92>/Sum'
     */
    INS_DWork.Integrator1_DSTATE[0] += (INS_P.gain_Gain * rtb_Sum_p_idx_0 +
      INS_B.Integrator[0]) * INS_P.Integrator1_gainval;

    /* Update for DiscreteIntegrator: '<S92>/Integrator' incorporates:
     *  Gain: '<S92>/gain1'
     */
    INS_DWork.Integrator_DSTATE[1] += INS_P.gain1_Gain * rtb_Sum_p_idx_1 *
      INS_P.Integrator_gainval;

    /* Update for DiscreteIntegrator: '<S92>/Integrator1' incorporates:
     *  Gain: '<S92>/gain'
     *  Gain: '<S92>/gain1'
     *  Sum: '<S92>/Sum'
     */
    INS_DWork.Integrator1_DSTATE[1] += (INS_P.gain_Gain * rtb_Sum_p_idx_1 +
      INS_B.Integrator[1]) * INS_P.Integrator1_gainval;

    /* Update for DiscreteIntegrator: '<S92>/Integrator' incorporates:
     *  Gain: '<S92>/gain1'
     */
    INS_DWork.Integrator_DSTATE[2] += INS_P.gain1_Gain * rtb_Switch_kj_idx_3 *
      INS_P.Integrator_gainval;

    /* Update for DiscreteIntegrator: '<S92>/Integrator1' incorporates:
     *  Gain: '<S92>/gain'
     *  Gain: '<S92>/gain1'
     *  Sum: '<S92>/Sum'
     */
    INS_DWork.Integrator1_DSTATE[2] += (INS_P.gain_Gain * rtb_Switch_kj_idx_3 +
      INS_B.Integrator[2]) * INS_P.Integrator1_gainval;
    INS_DWork.Integrator1_PrevResetState = (int8_T)rtb_WGS84_pos_valid;
  } else {
    if (INS_DWork.GPS_Meas_Acc_MODE) {
      INS_DWork.GPS_Meas_Acc_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S88>/GPS_Meas_Acc' */

  /* Sum: '<S74>/Sum2' incorporates:
   *  Constant: '<S74>/gravity'
   *  Product: '<S74>/Multiply'
   */
  rtb_Sum_p_idx_0 = INS_P.gravity_Value[0] + (rtb_Compare_o ? INS_B.Integrator[0]
    : 0.0F);
  rtb_Sum_p_idx_1 = INS_P.gravity_Value[1] + (rtb_Compare_o ? INS_B.Integrator[1]
    : 0.0F);
  rtb_Switch_kj_idx_3 = INS_P.gravity_Value[2] + (rtb_Compare_o ?
    INS_B.Integrator[2] : 0.0F);

  /* Gain: '<S75>/Gain1' */
  rtb_Multiply2 = INS_P.Gain1_Gain_l * rtb_Switch_kj_idx_3;

  /* Gain: '<S75>/Gain2' */
  rtb_dec_rad = INS_P.Gain2_Gain_i * rtb_MathFunction_e_idx_2;

  /* Sum: '<S77>/Sum' incorporates:
   *  Product: '<S78>/Multiply'
   *  Product: '<S79>/Multiply3'
   */
  rtb_DiscreteTimeIntegrator_eh = rtb_MathFunction_e_idx_1 * rtb_Multiply2 -
    rtb_dec_rad * rtb_Sum_p_idx_1;

  /* DeadZone: '<S75>/Dead Zone2' */
  if (rtb_DiscreteTimeIntegrator_eh > INS_P.DeadZone2_End) {
    rtb_DiscreteTimeIntegrator_eh -= INS_P.DeadZone2_End;
  } else if (rtb_DiscreteTimeIntegrator_eh >= INS_P.DeadZone2_Start) {
    rtb_DiscreteTimeIntegrator_eh = 0.0F;
  } else {
    rtb_DiscreteTimeIntegrator_eh -= INS_P.DeadZone2_Start;
  }

  /* Gain: '<S75>/Gain' */
  rtb_DiscreteTimeIntegrator_eh *= INS_PARAM.HEADING_GAIN;

  /* Saturate: '<S75>/Saturation' */
  if (rtb_DiscreteTimeIntegrator_eh > INS_P.Saturation_UpperSat_k) {
    rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation_UpperSat_k;
  } else {
    if (rtb_DiscreteTimeIntegrator_eh < INS_P.Saturation_LowerSat_k) {
      rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation_LowerSat_k;
    }
  }

  /* Product: '<S75>/Multiply' */
  rtb_Gain_gz_idx_0 = rtb_Compare_o ? rtb_DiscreteTimeIntegrator_eh : 0.0F;

  /* Sum: '<S77>/Sum' incorporates:
   *  Product: '<S78>/Multiply1'
   *  Product: '<S79>/Multiply4'
   */
  rtb_DiscreteTimeIntegrator_eh = rtb_dec_rad * rtb_Sum_p_idx_0 -
    rtb_DiscreteTimeIntegrator_g * rtb_Multiply2;

  /* DeadZone: '<S75>/Dead Zone2' */
  if (rtb_DiscreteTimeIntegrator_eh > INS_P.DeadZone2_End) {
    rtb_DiscreteTimeIntegrator_eh -= INS_P.DeadZone2_End;
  } else if (rtb_DiscreteTimeIntegrator_eh >= INS_P.DeadZone2_Start) {
    rtb_DiscreteTimeIntegrator_eh = 0.0F;
  } else {
    rtb_DiscreteTimeIntegrator_eh -= INS_P.DeadZone2_Start;
  }

  /* Gain: '<S75>/Gain' */
  rtb_DiscreteTimeIntegrator_eh *= INS_PARAM.HEADING_GAIN;

  /* Saturate: '<S75>/Saturation' */
  if (rtb_DiscreteTimeIntegrator_eh > INS_P.Saturation_UpperSat_k) {
    rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation_UpperSat_k;
  } else {
    if (rtb_DiscreteTimeIntegrator_eh < INS_P.Saturation_LowerSat_k) {
      rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation_LowerSat_k;
    }
  }

  /* Product: '<S75>/Multiply' */
  rtb_Gain_gz_idx_1 = rtb_Compare_o ? rtb_DiscreteTimeIntegrator_eh : 0.0F;

  /* Sum: '<S77>/Sum' incorporates:
   *  Product: '<S78>/Multiply2'
   *  Product: '<S79>/Multiply5'
   */
  rtb_DiscreteTimeIntegrator_eh = rtb_DiscreteTimeIntegrator_g * rtb_Sum_p_idx_1
    - rtb_MathFunction_e_idx_1 * rtb_Sum_p_idx_0;

  /* DeadZone: '<S75>/Dead Zone2' */
  if (rtb_DiscreteTimeIntegrator_eh > INS_P.DeadZone2_End) {
    rtb_DiscreteTimeIntegrator_eh -= INS_P.DeadZone2_End;
  } else if (rtb_DiscreteTimeIntegrator_eh >= INS_P.DeadZone2_Start) {
    rtb_DiscreteTimeIntegrator_eh = 0.0F;
  } else {
    rtb_DiscreteTimeIntegrator_eh -= INS_P.DeadZone2_Start;
  }

  /* Gain: '<S75>/Gain' */
  rtb_DiscreteTimeIntegrator_eh *= INS_PARAM.HEADING_GAIN;

  /* Saturate: '<S75>/Saturation' */
  if (rtb_DiscreteTimeIntegrator_eh > INS_P.Saturation_UpperSat_k) {
    rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation_UpperSat_k;
  } else {
    if (rtb_DiscreteTimeIntegrator_eh < INS_P.Saturation_LowerSat_k) {
      rtb_DiscreteTimeIntegrator_eh = INS_P.Saturation_LowerSat_k;
    }
  }

  /* Sum: '<S82>/Sum of Elements' incorporates:
   *  Math: '<S82>/Math Function'
   */
  rtb_Multiply2 = (rtb_DiscreteTimeIntegrator_g * rtb_DiscreteTimeIntegrator_g +
                   rtb_MathFunction_e_idx_1 * rtb_MathFunction_e_idx_1) +
    rtb_MathFunction_e_idx_2 * rtb_MathFunction_e_idx_2;

  /* Math: '<S82>/Math Function1'
   *
   * About '<S82>/Math Function1':
   *  Operator: sqrt
   */
  if (rtb_Multiply2 < 0.0F) {
    rtb_Multiply2 = -sqrtf(fabsf(rtb_Multiply2));
  } else {
    rtb_Multiply2 = sqrtf(rtb_Multiply2);
  }

  /* End of Math: '<S82>/Math Function1' */

  /* Switch: '<S82>/Switch' incorporates:
   *  Constant: '<S82>/Constant'
   *  Product: '<S82>/Product'
   */
  if (rtb_Multiply2 <= INS_P.Switch_Threshold) {
    rtb_DiscreteTimeIntegrator_g = 0.0F;
    rtb_MathFunction_e_idx_1 = 0.0F;
    rtb_MathFunction_e_idx_2 = 0.0F;
    rtb_Multiply2 = INS_P.Constant_Value_a;
  }

  /* End of Switch: '<S82>/Switch' */

  /* Product: '<S82>/Divide' */
  rtb_MathFunction[0] = rtb_DiscreteTimeIntegrator_g / rtb_Multiply2;
  rtb_MathFunction[1] = rtb_MathFunction_e_idx_1 / rtb_Multiply2;
  rtb_MathFunction[2] = rtb_MathFunction_e_idx_2 / rtb_Multiply2;

  /* Sum: '<S83>/Sum of Elements' incorporates:
   *  Math: '<S83>/Math Function'
   */
  rtb_Multiply2 = (rtb_Sum_p_idx_0 * rtb_Sum_p_idx_0 + rtb_Sum_p_idx_1 *
                   rtb_Sum_p_idx_1) + rtb_Switch_kj_idx_3 * rtb_Switch_kj_idx_3;

  /* Math: '<S83>/Math Function1'
   *
   * About '<S83>/Math Function1':
   *  Operator: sqrt
   */
  if (rtb_Multiply2 < 0.0F) {
    rtb_Multiply2 = -sqrtf(fabsf(rtb_Multiply2));
  } else {
    rtb_Multiply2 = sqrtf(rtb_Multiply2);
  }

  /* End of Math: '<S83>/Math Function1' */

  /* Switch: '<S83>/Switch' incorporates:
   *  Constant: '<S83>/Constant'
   *  Product: '<S83>/Product'
   */
  if (rtb_Multiply2 > INS_P.Switch_Threshold_m) {
    rtb_DiscreteTimeIntegrator_g = rtb_Sum_p_idx_0;
    rtb_MathFunction_e_idx_1 = rtb_Sum_p_idx_1;
    rtb_MathFunction_e_idx_2 = rtb_Switch_kj_idx_3;
  } else {
    rtb_DiscreteTimeIntegrator_g = 0.0F;
    rtb_MathFunction_e_idx_1 = 0.0F;
    rtb_MathFunction_e_idx_2 = 0.0F;
    rtb_Multiply2 = INS_P.Constant_Value_jy;
  }

  /* End of Switch: '<S83>/Switch' */

  /* Product: '<S83>/Divide' */
  rtb_DiscreteTimeIntegrator_g /= rtb_Multiply2;
  rtb_MathFunction_e_idx_1 /= rtb_Multiply2;
  rtb_MathFunction_e_idx_2 /= rtb_Multiply2;

  /* Product: '<S84>/Multiply2' */
  rtb_Switch_kj_idx_3 = rtb_MathFunction[0] * rtb_MathFunction_e_idx_1;

  /* Product: '<S85>/Multiply4' */
  rtb_dec_rad = rtb_MathFunction[0] * rtb_MathFunction_e_idx_2;

  /* Product: '<S85>/Multiply5' */
  rtb_ba_mPs2_idx_2 = rtb_MathFunction[1] * rtb_DiscreteTimeIntegrator_g;

  /* Sum: '<S80>/Sum' incorporates:
   *  Product: '<S84>/Multiply'
   *  Product: '<S85>/Multiply3'
   */
  rtb_MathFunction_e_idx_2 = rtb_MathFunction[1] * rtb_MathFunction_e_idx_2 -
    rtb_MathFunction[2] * rtb_MathFunction_e_idx_1;

  /* Math: '<S86>/Square' */
  rtb_MathFunction[0] = rtb_MathFunction_e_idx_2 * rtb_MathFunction_e_idx_2;

  /* Sum: '<S80>/Sum' incorporates:
   *  Product: '<S84>/Multiply1'
   */
  rtb_Sum_p_idx_0 = rtb_MathFunction_e_idx_2;
  rtb_MathFunction_e_idx_2 = rtb_MathFunction[2] * rtb_DiscreteTimeIntegrator_g
    - rtb_dec_rad;

  /* Math: '<S86>/Square' */
  rtb_MathFunction[1] = rtb_MathFunction_e_idx_2 * rtb_MathFunction_e_idx_2;

  /* Sum: '<S80>/Sum' */
  rtb_Sum_p_idx_1 = rtb_MathFunction_e_idx_2;
  rtb_MathFunction_e_idx_2 = rtb_Switch_kj_idx_3 - rtb_ba_mPs2_idx_2;

  /* Sqrt: '<S86>/Sqrt' incorporates:
   *  Math: '<S86>/Square'
   *  Sum: '<S86>/Sum of Elements'
   */
  rtb_Multiply2 = sqrtf((rtb_MathFunction[0] + rtb_MathFunction[1]) +
                        rtb_MathFunction_e_idx_2 * rtb_MathFunction_e_idx_2);

  /* Product: '<S81>/Divide1' incorporates:
   *  Constant: '<S81>/max'
   */
  rtb_DiscreteTimeIntegrator_g = rtb_Multiply2 / INS_P.max_Value;

  /* Saturate: '<S81>/Saturation' */
  if (rtb_DiscreteTimeIntegrator_g > INS_P.Saturation_UpperSat_e) {
    rtb_DiscreteTimeIntegrator_g = INS_P.Saturation_UpperSat_e;
  } else {
    if (rtb_DiscreteTimeIntegrator_g < INS_P.Saturation_LowerSat_fo) {
      rtb_DiscreteTimeIntegrator_g = INS_P.Saturation_LowerSat_fo;
    }
  }

  /* End of Saturate: '<S81>/Saturation' */

  /* Product: '<S81>/Divide2' incorporates:
   *  Constant: '<S81>/max'
   *  Trigonometry: '<S81>/Trigonometric Function'
   */
  rtb_Switch_kj_idx_2 = arm_sin_f32(rtb_DiscreteTimeIntegrator_g) *
    INS_P.max_Value;

  /* MinMax: '<S81>/MinMax' incorporates:
   *  Constant: '<S81>/Constant1'
   */
  rtb_Multiply2 = fmaxf(rtb_Multiply2, INS_P.Constant1_Value_n);

  /* Sum: '<S73>/Sum' incorporates:
   *  Gain: '<S76>/Gain'
   *  Product: '<S75>/Multiply'
   *  Product: '<S81>/Divide'
   */
  rtb_Gain_gz_idx_0 += rtb_Sum_p_idx_0 * rtb_Switch_kj_idx_2 / rtb_Multiply2 *
    INS_P.Gain_Gain_o[0];
  rtb_Gain_gz_idx_1 += rtb_Sum_p_idx_1 * rtb_Switch_kj_idx_2 / rtb_Multiply2 *
    INS_P.Gain_Gain_o[1];
  rtb_Gain_gz_idx_2 = rtb_MathFunction_e_idx_2 * rtb_Switch_kj_idx_2 /
    rtb_Multiply2 * INS_P.Gain_Gain_o[2] + (rtb_Compare_o ?
    rtb_DiscreteTimeIntegrator_eh : 0.0F);

  /* DiscreteIntegrator: '<S89>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S89>/Constant'
   */
  if ((INS_P.Constant_Value_g3 != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator_PrevRe_f != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[0] =
      INS_P.DiscreteTimeIntegrator_IC_a;
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[1] =
      INS_P.DiscreteTimeIntegrator_IC_a;
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[2] =
      INS_P.DiscreteTimeIntegrator_IC_a;
  }

  /* Gain: '<S89>/Gain' incorporates:
   *  DiscreteIntegrator: '<S89>/Discrete-Time Integrator1'
   *  Sum: '<S89>/Sum'
   */
  rtb_Gain_ok[0] = (rtb_Gain_ok[0] - INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[0])
    * INS_P.Gain_Gain_p;
  rtb_Gain_ok[1] = (rtb_Gain_ok[1] - INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[1])
    * INS_P.Gain_Gain_p;
  rtb_Gain_b = (rtb_Gain_ok[2] - INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[2]) *
    INS_P.Gain_Gain_p;

  /* Switch: '<S94>/Switch' incorporates:
   *  Delay: '<S57>/Delay'
   *  Delay: '<S94>/Delay'
   *  Inport: '<Root>/External_Pos'
   *  RelationalOperator: '<S97>/FixPt Relational Operator'
   *  SignalConversion: '<S367>/BusConversion_InsertedFor_ExternalPos_Data_at_inport_0'
   *  Sum: '<S96>/Sum'
   *  UnitDelay: '<S97>/Delay Input1'
   */
  if ((int32_T)rtb_LogicalOperator5 > (int32_T)INS_DWork.DelayInput1_DSTATE_ii)
  {
    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/ExternalPos_Process' */
    rtb_Switch_kj_idx_2 = INS_DWork.Delay_4_DSTATE_d - INS_U.External_Pos.psi;

    /* End of Outputs for SubSystem: '<S3>/ExternalPos_Process' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */
  } else {
    rtb_Switch_kj_idx_2 = INS_DWork.Delay_DSTATE_b3;
  }

  /* End of Switch: '<S94>/Switch' */

  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/ExternalPos_Process' */
  /* Sum: '<S71>/Sum' incorporates:
   *  Delay: '<S57>/Delay'
   *  Inport: '<Root>/External_Pos'
   *  SignalConversion: '<S367>/BusConversion_InsertedFor_ExternalPos_Data_at_inport_0'
   */
  rtb_Multiply2 = (rtb_Switch_kj_idx_2 + INS_U.External_Pos.psi) -
    INS_DWork.Delay_4_DSTATE_d;

  /* End of Outputs for SubSystem: '<S3>/ExternalPos_Process' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

  /* Abs: '<S95>/Abs' */
  rtb_DiscreteTimeIntegrator_eh = fabsf(rtb_Multiply2);

  /* Switch: '<S95>/Switch' incorporates:
   *  Constant: '<S95>/Constant'
   *  Constant: '<S98>/Constant'
   *  Product: '<S95>/Multiply'
   *  RelationalOperator: '<S98>/Compare'
   *  Sum: '<S95>/Subtract'
   */
  if (rtb_DiscreteTimeIntegrator_eh > INS_P.CompareToConstant_const) {
    /* Signum: '<S95>/Sign' */
    if (rtb_Multiply2 < 0.0F) {
      rtb_Multiply2 = -1.0F;
    } else {
      if (rtb_Multiply2 > 0.0F) {
        rtb_Multiply2 = 1.0F;
      }
    }

    /* End of Signum: '<S95>/Sign' */
    rtb_Multiply2 *= rtb_DiscreteTimeIntegrator_eh - INS_P.Constant_Value_g;
  }

  /* End of Switch: '<S95>/Switch' */

  /* Product: '<S71>/Multiply' incorporates:
   *  Gain: '<S71>/Gain'
   */
  rtb_Sum_p_idx_0 = rtb_LogicalOperator5 ? INS_P.Gain_Gain_m[0] * rtb_Multiply2 :
    0.0F;
  rtb_Sum_p_idx_1 = rtb_LogicalOperator5 ? INS_P.Gain_Gain_m[1] * rtb_Multiply2 :
    0.0F;
  rtb_Switch_kj_idx_3 = rtb_LogicalOperator5 ? INS_P.Gain_Gain_m[2] *
    rtb_Multiply2 : 0.0F;

  /* DiscreteIntegrator: '<S105>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S105>/Constant'
   *  Delay: '<S57>/Delay'
   */
  if (INS_DWork.DiscreteTimeIntegrator1_IC_LO_m != 0) {
    INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[0] = INS_DWork.Delay_10_DSTATE[0];
    INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[1] = INS_DWork.Delay_10_DSTATE[1];
    INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[2] = INS_DWork.Delay_10_DSTATE[2];
  }

  if ((INS_P.Constant_Value_f != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator1_PrevR_m != 0)) {
    INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[0] = INS_DWork.Delay_10_DSTATE[0];
    INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[1] = INS_DWork.Delay_10_DSTATE[1];
    INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[2] = INS_DWork.Delay_10_DSTATE[2];
  }

  /* Product: '<S100>/MX Product1' incorporates:
   *  Delay: '<S57>/Delay'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_MathFunction[rtb_Saturation1_j_idx_1_0] =
      INS_DWork.Delay_8_DSTATE_l[rtb_Saturation1_j_idx_1_0 + 6] *
      rtb_Gauss_to_uT[2] + (INS_DWork.Delay_8_DSTATE_l[rtb_Saturation1_j_idx_1_0
      + 3] * rtb_Gauss_to_uT[1] +
      INS_DWork.Delay_8_DSTATE_l[rtb_Saturation1_j_idx_1_0] * rtb_Gauss_to_uT[0]);
  }

  /* End of Product: '<S100>/MX Product1' */

  /* Sum: '<S100>/Add' incorporates:
   *  Delay: '<S57>/Delay'
   *  Gain: '<S100>/Gain'
   *  Trigonometry: '<S100>/Atan2'
   */
  rtb_DiscreteTimeIntegrator_g = atan2f(INS_P.Gain_Gain_pq * rtb_MathFunction[1],
    rtb_MathFunction[0]) + INS_DWork.Delay_4_DSTATE_d;

  /* Relay: '<S72>/Relay1' */
  if (rtb_MathFunction1 >= INS_P.Relay1_OnVal_i) {
    INS_DWork.Relay1_Mode_l = true;
  } else {
    if (rtb_MathFunction1 <= INS_P.Relay1_OffVal_o) {
      INS_DWork.Relay1_Mode_l = false;
    }
  }

  if (INS_DWork.Relay1_Mode_l) {
    rtb_Multiply2 = INS_P.Relay1_YOn;
  } else {
    rtb_Multiply2 = INS_P.Relay1_YOff;
  }

  /* End of Relay: '<S72>/Relay1' */

  /* Logic: '<S72>/Logical Operator' incorporates:
   *  Constant: '<S72>/Constant'
   *  Logic: '<S72>/Logical Operator1'
   *  Logic: '<S72>/Logical Operator2'
   */
  rtb_WGS84_pos_valid = ((rtb_Multiply2 != 0.0F) && (!rtb_LogicalOperator5) &&
    ((INS_PARAM.MAG_AIR_EN != 0) || (rtb_Abs_h_idx_0 != 0.0F)));

  /* Logic: '<S99>/Logical Operator3' incorporates:
   *  Abs: '<S99>/Abs'
   *  Abs: '<S99>/Abs1'
   *  Constant: '<S102>/Constant'
   *  Constant: '<S104>/Constant'
   *  DiscreteIntegrator: '<S105>/Discrete-Time Integrator1'
   *  Logic: '<S99>/Logical Operator'
   *  RelationalOperator: '<S102>/Compare'
   *  RelationalOperator: '<S104>/Compare'
   */
  rtb_Compare_jx = ((fabsf(rtb_Gain_gz_idx_2) > INS_P.Constant_Value_d) ||
                    (rtb_Abs_h_idx_0 != 0.0F) || rtb_WGS84_pos_valid || ((fabsf
    (INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[0]) >
    INS_P.CompareToConstant_const_g) || (fabsf
    (INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[1]) >
    INS_P.CompareToConstant_const_g) || (fabsf
    (INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[2]) >
    INS_P.CompareToConstant_const_g)));

  /* DiscreteIntegrator: '<S99>/Discrete-Time Integrator' */
  if (rtb_Compare_jx || (INS_DWork.DiscreteTimeIntegrator_PrevRe_n != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_d =
      INS_P.DiscreteTimeIntegrator_IC_io;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_d >=
      INS_P.DiscreteTimeIntegrator_UpperS_c) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_d =
      INS_P.DiscreteTimeIntegrator_UpperS_c;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_d <=
        INS_P.DiscreteTimeIntegrator_LowerS_m) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_d =
        INS_P.DiscreteTimeIntegrator_LowerS_m;
    }
  }

  /* RelationalOperator: '<S103>/Compare' incorporates:
   *  Constant: '<S103>/Constant'
   *  DiscreteIntegrator: '<S99>/Discrete-Time Integrator'
   */
  rtb_Compare_cy = (INS_DWork.DiscreteTimeIntegrator_DSTATE_d >=
                    INS_P.CompareToConstant4_const);

  /* Switch: '<S101>/Switch' incorporates:
   *  Delay: '<S101>/Delay'
   *  Delay: '<S57>/Delay'
   *  RelationalOperator: '<S108>/FixPt Relational Operator'
   *  Sum: '<S107>/Sum'
   *  UnitDelay: '<S108>/Delay Input1'
   */
  if ((int32_T)rtb_Compare_cy > (int32_T)INS_DWork.DelayInput1_DSTATE_d2s) {
    rtb_DiscreteTimeIntegrator_eh = INS_DWork.Delay_4_DSTATE_d -
      rtb_DiscreteTimeIntegrator_g;
  } else {
    rtb_DiscreteTimeIntegrator_eh = INS_DWork.Delay_DSTATE_lt;
  }

  /* End of Switch: '<S101>/Switch' */

  /* Sum: '<S99>/Sum' incorporates:
   *  Delay: '<S57>/Delay'
   */
  rtb_dec_rad = (rtb_DiscreteTimeIntegrator_eh + rtb_DiscreteTimeIntegrator_g) -
    INS_DWork.Delay_4_DSTATE_d;

  /* Abs: '<S106>/Abs' */
  rtb_DiscreteTimeIntegrator_g = fabsf(rtb_dec_rad);

  /* Switch: '<S106>/Switch' incorporates:
   *  Constant: '<S106>/Constant'
   *  Constant: '<S109>/Constant'
   *  Product: '<S106>/Multiply'
   *  RelationalOperator: '<S109>/Compare'
   *  Sum: '<S106>/Subtract'
   */
  if (rtb_DiscreteTimeIntegrator_g > INS_P.CompareToConstant_const_h) {
    /* Signum: '<S106>/Sign' */
    if (rtb_dec_rad < 0.0F) {
      rtb_dec_rad = -1.0F;
    } else {
      if (rtb_dec_rad > 0.0F) {
        rtb_dec_rad = 1.0F;
      }
    }

    /* End of Signum: '<S106>/Sign' */
    rtb_dec_rad *= rtb_DiscreteTimeIntegrator_g - INS_P.Constant_Value_ny;
  }

  /* End of Switch: '<S106>/Switch' */

  /* Product: '<S99>/Multiply' incorporates:
   *  Gain: '<S99>/Gain'
   */
  rtb_MathFunction[0] = INS_P.Gain_Gain_m5[0] * rtb_dec_rad * (rtb_Compare_cy ?
    rtb_Multiply2 : 0.0F);
  rtb_MathFunction[1] = INS_P.Gain_Gain_m5[1] * rtb_dec_rad * (rtb_Compare_cy ?
    rtb_Multiply2 : 0.0F);
  rtb_MathFunction[2] = INS_P.Gain_Gain_m5[2] * rtb_dec_rad * (rtb_Compare_cy ?
    rtb_Multiply2 : 0.0F);

  /* DiscreteIntegrator: '<S105>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S105>/Constant'
   */
  if ((INS_P.Constant_Value_f != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator_PrevRe_e != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[0] =
      INS_P.DiscreteTimeIntegrator_IC_el;
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[1] =
      INS_P.DiscreteTimeIntegrator_IC_el;
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[2] =
      INS_P.DiscreteTimeIntegrator_IC_el;
  }

  /* Gain: '<S105>/Gain' incorporates:
   *  Delay: '<S57>/Delay'
   *  DiscreteIntegrator: '<S105>/Discrete-Time Integrator1'
   *  Sum: '<S105>/Sum'
   */
  rtb_ba_mPs2_idx_0 = (INS_DWork.Delay_10_DSTATE[0] -
                       INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[0]) *
    INS_P.Gain_Gain_pl;
  rtb_dec_rad = (INS_DWork.Delay_10_DSTATE[1] -
                 INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[1]) *
    INS_P.Gain_Gain_pl;
  rtb_ba_mPs2_idx_2 = (INS_DWork.Delay_10_DSTATE[2] -
                       INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[2]) *
    INS_P.Gain_Gain_pl;

  /* Gain: '<S72>/mag_correct_gain' incorporates:
   *  Delay: '<S57>/Delay'
   *  Product: '<S72>/MX Product4'
   *  Selector: '<S72>/Selector4'
   */
  rtb_Multiply2 = ((INS_DWork.Delay_8_DSTATE_l[1] * rtb_Gauss_to_uT[0] +
                    INS_DWork.Delay_8_DSTATE_l[4] * rtb_Gauss_to_uT[1]) +
                   INS_DWork.Delay_8_DSTATE_l[7] * rtb_Gauss_to_uT[2]) *
    -INS_PARAM.MAG_GAIN;

  /* Sum: '<S68>/Sum' incorporates:
   *  Constant: '<S72>/Z axis'
   *  Product: '<S72>/MX Product3'
   *  Sum: '<S68>/Sum1'
   *  Sum: '<S72>/Sum1'
   */
  rtb_Gain_gz_idx_0 += ((rtb_WGS84_pos_valid ? INS_P.Zaxis_Value[0] *
    rtb_Multiply2 : 0.0F) + rtb_MathFunction[0]) + rtb_Sum_p_idx_0;
  rtb_Gain_gz_idx_1 += ((rtb_WGS84_pos_valid ? INS_P.Zaxis_Value[1] *
    rtb_Multiply2 : 0.0F) + rtb_MathFunction[1]) + rtb_Sum_p_idx_1;
  rtb_Gain_gz_idx_2 += ((rtb_WGS84_pos_valid ? INS_P.Zaxis_Value[2] *
    rtb_Multiply2 : 0.0F) + rtb_MathFunction[2]) + rtb_Switch_kj_idx_3;

  /* Sum: '<S112>/Sum of Elements' */
  rtb_Multiply2 = -0.0F;
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    /* Sum: '<S112>/Sum of Elements' incorporates:
     *  Math: '<S112>/Square'
     */
    rtb_Multiply2 += rtb_VectorConcatenate[rtb_Saturation1_j_idx_1_0];

    /* Product: '<S68>/Multiply' incorporates:
     *  Delay: '<S57>/Delay'
     */
    rtb_MathFunction[rtb_Saturation1_j_idx_1_0] =
      INS_DWork.Delay_7_DSTATE[rtb_Saturation1_j_idx_1_0 + 6] *
      rtb_Gain_gz_idx_2 + (INS_DWork.Delay_7_DSTATE[rtb_Saturation1_j_idx_1_0 +
      3] * rtb_Gain_gz_idx_1 +
      INS_DWork.Delay_7_DSTATE[rtb_Saturation1_j_idx_1_0] * rtb_Gain_gz_idx_0);
  }

  /* Sqrt: '<S112>/Sqrt' */
  rtb_Multiply2 = sqrtf(rtb_Multiply2);

  /* Sum: '<S69>/Subtract' incorporates:
   *  Constant: '<S69>/Constant'
   */
  rtb_Multiply2 -= INS_P.INS_CONST.g;

  /* Abs: '<S69>/Abs' */
  rtb_Multiply2 = fabsf(rtb_Multiply2);

  /* RelationalOperator: '<S110>/Compare' incorporates:
   *  Constant: '<S110>/Constant'
   */
  rtb_WGS84_pos_valid = (rtb_Multiply2 <= INS_P.CompareToConstant_const_n);

  /* Product: '<S69>/MX Product1' incorporates:
   *  DataTypeConversion: '<S69>/Data Type Conversion'
   */
  rtb_Gain_gz_idx_0 = rtb_MathFunction[0] * (real32_T)rtb_WGS84_pos_valid;
  rtb_Gain_gz_idx_1 = rtb_MathFunction[1] * (real32_T)rtb_WGS84_pos_valid;
  rtb_Gain_gz_idx_2 = rtb_MathFunction[2] * (real32_T)rtb_WGS84_pos_valid;

  /* DiscreteIntegrator: '<S111>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S111>/Constant'
   */
  if (INS_DWork.DiscreteTimeIntegrator1_IC_LO_l != 0) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[0] = rtb_Gain_gz_idx_0;
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[1] = rtb_Gain_gz_idx_1;
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[2] = rtb_Gain_gz_idx_2;
  }

  if ((INS_P.Constant_Value_no != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator1_PrevR_o != 0)) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[0] = rtb_Gain_gz_idx_0;
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[1] = rtb_Gain_gz_idx_1;
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[2] = rtb_Gain_gz_idx_2;
  }

  /* Gain: '<S69>/Gain1' incorporates:
   *  DiscreteIntegrator: '<S111>/Discrete-Time Integrator1'
   */
  rtb_DiscreteTimeIntegrator_g = INS_PARAM.BIAS_G_GAIN *
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[0];
  rtb_MathFunction_e_idx_1 = INS_PARAM.BIAS_G_GAIN *
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[1];
  rtb_MathFunction_e_idx_2 = INS_PARAM.BIAS_G_GAIN *
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[2];

  /* DiscreteIntegrator: '<S111>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S111>/Constant'
   */
  if ((INS_P.Constant_Value_no != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator_PrevR_nh != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[0] =
      INS_P.DiscreteTimeIntegrator_IC_m;
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[1] =
      INS_P.DiscreteTimeIntegrator_IC_m;
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[2] =
      INS_P.DiscreteTimeIntegrator_IC_m;
  }

  /* Update for DiscreteIntegrator: '<S89>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<S89>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_IC_LO_i = 0U;
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[0] +=
    INS_P.DiscreteTimeIntegrator1_gainval *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[0];

  /* Gain: '<S111>/Gain' incorporates:
   *  DiscreteIntegrator: '<S111>/Discrete-Time Integrator1'
   *  Sum: '<S111>/Sum'
   */
  rtb_Gain_gz_idx_0 = (rtb_Gain_gz_idx_0 -
                       INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[0]) *
    INS_P.Gain_Gain_i;

  /* Update for DiscreteIntegrator: '<S89>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<S89>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[1] +=
    INS_P.DiscreteTimeIntegrator1_gainval *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[1];

  /* Gain: '<S111>/Gain' incorporates:
   *  DiscreteIntegrator: '<S111>/Discrete-Time Integrator1'
   *  Sum: '<S111>/Sum'
   */
  rtb_Gain_gz_idx_1 = (rtb_Gain_gz_idx_1 -
                       INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[1]) *
    INS_P.Gain_Gain_i;
  rtb_Gain_gz_idx_2 = (rtb_Gain_gz_idx_2 -
                       INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[2]) *
    INS_P.Gain_Gain_i;

  /* Update for DiscreteIntegrator: '<S89>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S89>/Constant'
   *  DiscreteIntegrator: '<S89>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_o[2] +=
    INS_P.DiscreteTimeIntegrator1_gainval *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[2];
  if (INS_P.Constant_Value_g3 > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_p = 1;
  } else if (INS_P.Constant_Value_g3 < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_p = -1;
  } else if (INS_P.Constant_Value_g3 == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_p = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_p = 2;
  }

  /* Update for Delay: '<S87>/Delay' */
  for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 199;
       rtb_Saturation1_j_idx_0++) {
    rtb_Saturation1_j_idx_1 = (rtb_Saturation1_j_idx_0 + 1) * 3;
    INS_DWork.Delay_DSTATE_lv[rtb_Saturation1_j_idx_0 * 3] =
      INS_DWork.Delay_DSTATE_lv[rtb_Saturation1_j_idx_1];
    INS_DWork.Delay_DSTATE_lv[rtb_Saturation1_j_idx_0 * 3 + 1] =
      INS_DWork.Delay_DSTATE_lv[rtb_Saturation1_j_idx_1 + 1];
    INS_DWork.Delay_DSTATE_lv[rtb_Saturation1_j_idx_0 * 3 + 2] =
      INS_DWork.Delay_DSTATE_lv[rtb_Saturation1_j_idx_1 + 2];
  }

  /* Update for UnitDelay: '<S91>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_ff = rtb_Compare_o;

  /* Update for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S89>/Constant'
   */
  if (INS_P.Constant_Value_g3 > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_f = 1;
  } else if (INS_P.Constant_Value_g3 < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_f = -1;
  } else if (INS_P.Constant_Value_g3 == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_f = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_f = 2;
  }

  /* Update for Delay: '<S94>/Delay' */
  INS_DWork.Delay_DSTATE_b3 = rtb_Switch_kj_idx_2;

  /* Update for UnitDelay: '<S97>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_ii = rtb_LogicalOperator5;

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator1' */
  INS_DWork.DiscreteTimeIntegrator1_IC_LO_m = 0U;

  /* Update for Delay: '<S87>/Delay' */
  INS_DWork.Delay_DSTATE_lv[597] = rtb_Sum_gn_idx_0;

  /* Update for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S89>/Gain1'
   *  Sum: '<S89>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[0] += (rtb_Gain_ok[0] -
    INS_P.Gain1_Gain_p * INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[0]) *
    INS_P.DiscreteTimeIntegrator_gainva_n;

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<S105>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[0] +=
    INS_P.DiscreteTimeIntegrator1_gainv_a *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[0];

  /* Update for Delay: '<S87>/Delay' */
  INS_DWork.Delay_DSTATE_lv[598] = rtb_Sum_gn_idx_1;

  /* Update for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S89>/Gain1'
   *  Sum: '<S89>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[1] += (rtb_Gain_ok[1] -
    INS_P.Gain1_Gain_p * INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[1]) *
    INS_P.DiscreteTimeIntegrator_gainva_n;

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<S105>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[1] +=
    INS_P.DiscreteTimeIntegrator1_gainv_a *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[1];

  /* Update for Delay: '<S87>/Delay' */
  INS_DWork.Delay_DSTATE_lv[599] = rtb_Sum_gn_idx_2;

  /* Update for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S89>/Gain1'
   *  Sum: '<S89>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[2] += (rtb_Gain_b -
    INS_P.Gain1_Gain_p * INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[2]) *
    INS_P.DiscreteTimeIntegrator_gainva_n;

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S105>/Constant'
   *  DiscreteIntegrator: '<S105>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTA_m3[2] +=
    INS_P.DiscreteTimeIntegrator1_gainv_a *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[2];
  if (INS_P.Constant_Value_f > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_m = 1;
  } else if (INS_P.Constant_Value_f < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_m = -1;
  } else if (INS_P.Constant_Value_f == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_m = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_m = 2;
  }

  /* Update for Delay: '<S101>/Delay' */
  INS_DWork.Delay_DSTATE_lt = rtb_DiscreteTimeIntegrator_eh;

  /* Update for UnitDelay: '<S108>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_d2s = rtb_Compare_cy;

  /* Update for DiscreteIntegrator: '<S99>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S99>/Constant1'
   */
  rtb_Sum_p_idx_1 = (real32_T)INS_DWork.DiscreteTimeIntegrator_DSTATE_d +
    (real32_T)INS_EXPORT.period;
  if (rtb_Sum_p_idx_1 < 4.2949673E+9F) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_d = (uint32_T)rtb_Sum_p_idx_1;
  } else {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_d = MAX_uint32_T;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_d >=
      INS_P.DiscreteTimeIntegrator_UpperS_c) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_d =
      INS_P.DiscreteTimeIntegrator_UpperS_c;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_d <=
        INS_P.DiscreteTimeIntegrator_LowerS_m) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_d =
        INS_P.DiscreteTimeIntegrator_LowerS_m;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevRe_n = (int8_T)rtb_Compare_jx;

  /* End of Update for DiscreteIntegrator: '<S99>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S105>/Constant'
   */
  if (INS_P.Constant_Value_f > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_e = 1;
  } else if (INS_P.Constant_Value_f < 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_e = -1;
  } else if (INS_P.Constant_Value_f == 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_e = 0;
  } else {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_e = 2;
  }

  /* Update for DiscreteIntegrator: '<S111>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S111>/Constant'
   *  DiscreteIntegrator: '<S111>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_IC_LO_l = 0U;
  if (INS_P.Constant_Value_no > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator1_PrevR_o = 1;
    INS_DWork.DiscreteTimeIntegrator_PrevR_nh = 1;
  } else {
    if (INS_P.Constant_Value_no < 0.0F) {
      INS_DWork.DiscreteTimeIntegrator1_PrevR_o = -1;
    } else if (INS_P.Constant_Value_no == 0.0F) {
      INS_DWork.DiscreteTimeIntegrator1_PrevR_o = 0;
    } else {
      INS_DWork.DiscreteTimeIntegrator1_PrevR_o = 2;
    }

    if (INS_P.Constant_Value_no < 0.0F) {
      INS_DWork.DiscreteTimeIntegrator_PrevR_nh = -1;
    } else if (INS_P.Constant_Value_no == 0.0F) {
      INS_DWork.DiscreteTimeIntegrator_PrevR_nh = 0;
    } else {
      INS_DWork.DiscreteTimeIntegrator_PrevR_nh = 2;
    }
  }

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S105>/Gain1'
   *  Sum: '<S105>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[0] += (rtb_ba_mPs2_idx_0 -
    INS_P.Gain1_Gain_g * INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[0]) *
    INS_P.DiscreteTimeIntegrator_gainva_h;

  /* Update for DiscreteIntegrator: '<S111>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<S111>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[0] +=
    INS_P.DiscreteTimeIntegrator1_gainv_j *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[0];

  /* Update for DiscreteIntegrator: '<S111>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S111>/Gain1'
   *  Sum: '<S111>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[0] += (rtb_Gain_gz_idx_0 -
    INS_P.Gain1_Gain_i * INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[0]) *
    INS_P.DiscreteTimeIntegrator_gainv_kw;

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S105>/Gain1'
   *  Sum: '<S105>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[1] += (rtb_dec_rad -
    INS_P.Gain1_Gain_g * INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[1]) *
    INS_P.DiscreteTimeIntegrator_gainva_h;

  /* Update for DiscreteIntegrator: '<S111>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<S111>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[1] +=
    INS_P.DiscreteTimeIntegrator1_gainv_j *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[1];

  /* Update for DiscreteIntegrator: '<S111>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S111>/Gain1'
   *  Sum: '<S111>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[1] += (rtb_Gain_gz_idx_1 -
    INS_P.Gain1_Gain_i * INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[1]) *
    INS_P.DiscreteTimeIntegrator_gainv_kw;

  /* Update for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S105>/Gain1'
   *  Sum: '<S105>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[2] += (rtb_ba_mPs2_idx_2 -
    INS_P.Gain1_Gain_g * INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[2]) *
    INS_P.DiscreteTimeIntegrator_gainva_h;

  /* Update for DiscreteIntegrator: '<S111>/Discrete-Time Integrator1' incorporates:
   *  DiscreteIntegrator: '<S111>/Discrete-Time Integrator'
   */
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_b[2] +=
    INS_P.DiscreteTimeIntegrator1_gainv_j *
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[2];

  /* Update for DiscreteIntegrator: '<S111>/Discrete-Time Integrator' incorporates:
   *  Gain: '<S111>/Gain1'
   *  Sum: '<S111>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[2] += (rtb_Gain_gz_idx_2 -
    INS_P.Gain1_Gain_i * INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[2]) *
    INS_P.DiscreteTimeIntegrator_gainv_kw;

  /* End of Outputs for SubSystem: '<S57>/Correct' */

  /* Outputs for Atomic SubSystem: '<S57>/Update' */
  /* DiscreteIntegrator: '<S113>/Discrete-Time Integrator' */
  if (INS_DWork.DiscreteTimeIntegrator_IC_LOADI != 0) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[0] = INS_B.OutportBufferForquat_0
      [0];
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[1] = INS_B.OutportBufferForquat_0
      [1];
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[2] = INS_B.OutportBufferForquat_0
      [2];
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[3] = INS_B.OutportBufferForquat_0
      [3];
  }

  if (rtb_Switch_ol || (INS_DWork.DiscreteTimeIntegrator_PrevR_bk != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[0] = INS_B.OutportBufferForquat_0
      [0];
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[1] = INS_B.OutportBufferForquat_0
      [1];
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[2] = INS_B.OutportBufferForquat_0
      [2];
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[3] = INS_B.OutportBufferForquat_0
      [3];
  }

  /* Sqrt: '<S122>/Sqrt' incorporates:
   *  DiscreteIntegrator: '<S113>/Discrete-Time Integrator'
   *  Math: '<S122>/Square'
   *  Sum: '<S122>/Sum of Elements'
   */
  rtb_dec_rad = sqrtf(((INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[0] *
                        INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[0] +
                        INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[1] *
                        INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[1]) +
                       INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[2] *
                       INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[2]) +
                      INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[3] *
                      INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[3]);

  /* Product: '<S116>/Divide' incorporates:
   *  DiscreteIntegrator: '<S113>/Discrete-Time Integrator'
   */
  rtb_Sum_p_idx_0 = INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[0] / rtb_dec_rad;
  rtb_Sum_p_idx_1 = INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[1] / rtb_dec_rad;
  rtb_Switch_kj_idx_2 = INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[2] /
    rtb_dec_rad;
  rtb_Switch_kj_idx_3 = INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[3] /
    rtb_dec_rad;

  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
  /* Sum: '<S61>/Sum2' incorporates:
   *  DiscreteIntegrator: '<S114>/Discrete-Time Integrator2'
   *  Inport: '<Root>/IMU'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport1'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport2'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport3'
   *  Sum: '<S114>/Sum1'
   */
  rtb_MathFunction[0] += INS_DWork.DiscreteTimeIntegrator2_DSTATE[0] +
    INS_U.IMU.gyr_x;
  rtb_MathFunction[1] += INS_DWork.DiscreteTimeIntegrator2_DSTATE[1] +
    INS_U.IMU.gyr_y;
  rtb_Gain_gz_idx_0 = (INS_DWork.DiscreteTimeIntegrator2_DSTATE[2] +
                       INS_U.IMU.gyr_z) + rtb_MathFunction[2];

  /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
  /* Sqrt: '<S127>/Sqrt' incorporates:
   *  Math: '<S127>/Square'
   *  Sqrt: '<S66>/Sqrt'
   *  Sum: '<S127>/Sum of Elements'
   */
  rtb_Gain_gz_idx_1 = sqrtf(((rtb_Sum_p_idx_0 * rtb_Sum_p_idx_0 +
    rtb_Sum_p_idx_1 * rtb_Sum_p_idx_1) + rtb_Switch_kj_idx_2 *
    rtb_Switch_kj_idx_2) + rtb_Switch_kj_idx_3 * rtb_Switch_kj_idx_3);

  /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */

  /* Product: '<S123>/Divide' incorporates:
   *  Sqrt: '<S127>/Sqrt'
   */
  rtb_Multiply2 = rtb_Sum_p_idx_0 / rtb_Gain_gz_idx_1;
  rtb_Sum_gn_idx_0 = rtb_Sum_p_idx_1 / rtb_Gain_gz_idx_1;
  rtb_Sum_gn_idx_1 = rtb_Switch_kj_idx_2 / rtb_Gain_gz_idx_1;
  rtb_Sum_gn_idx_2 = rtb_Switch_kj_idx_3 / rtb_Gain_gz_idx_1;

  /* Math: '<S124>/Square' incorporates:
   *  Math: '<S125>/Square'
   *  Math: '<S126>/Square'
   *  Product: '<S123>/Divide'
   */
  rtb_Gain_gz_idx_2 = rtb_Multiply2 * rtb_Multiply2;

  /* Math: '<S124>/Square2' incorporates:
   *  Math: '<S125>/Square2'
   *  Math: '<S126>/Square2'
   *  Product: '<S123>/Divide'
   */
  rtb_dec_rad = rtb_Sum_gn_idx_1 * rtb_Sum_gn_idx_1;

  /* Math: '<S124>/Square1' incorporates:
   *  Math: '<S125>/Square1'
   *  Math: '<S126>/Square1'
   *  Product: '<S123>/Divide'
   */
  rtb_DiscreteTimeIntegrator_eh = rtb_Sum_gn_idx_0 * rtb_Sum_gn_idx_0;

  /* Math: '<S124>/Square3' incorporates:
   *  Math: '<S125>/Square3'
   *  Math: '<S126>/Square3'
   *  Product: '<S123>/Divide'
   */
  rtb_ba_mPs2_idx_2 = rtb_Sum_gn_idx_2 * rtb_Sum_gn_idx_2;

  /* Sum: '<S124>/Subtract' incorporates:
   *  Math: '<S124>/Square'
   *  Math: '<S124>/Square1'
   *  Math: '<S124>/Square2'
   *  Math: '<S124>/Square3'
   *  Sum: '<S124>/Add'
   *  Sum: '<S124>/Add1'
   */
  rtb_M_OC[0] = (rtb_Gain_gz_idx_2 + rtb_DiscreteTimeIntegrator_eh) -
    (rtb_dec_rad + rtb_ba_mPs2_idx_2);

  /* Product: '<S124>/Multiply' incorporates:
   *  Product: '<S123>/Divide'
   *  Product: '<S125>/Multiply'
   */
  rtb_Gain_b = rtb_Sum_gn_idx_0 * rtb_Sum_gn_idx_1;

  /* Product: '<S124>/Multiply1' incorporates:
   *  Product: '<S123>/Divide'
   *  Product: '<S125>/Multiply1'
   */
  rtb_ba_mPs2_idx_0 = rtb_Multiply2 * rtb_Sum_gn_idx_2;

  /* Gain: '<S124>/Gain' incorporates:
   *  Product: '<S124>/Multiply'
   *  Product: '<S124>/Multiply1'
   *  Sum: '<S124>/Subtract1'
   */
  rtb_M_OC[1] = (rtb_Gain_b - rtb_ba_mPs2_idx_0) * INS_P.Gain_Gain_e;

  /* Product: '<S124>/Multiply2' incorporates:
   *  Product: '<S123>/Divide'
   *  Product: '<S126>/Multiply'
   */
  rtb_M_OC_tmp = rtb_Sum_gn_idx_0 * rtb_Sum_gn_idx_2;

  /* Product: '<S124>/Multiply3' incorporates:
   *  Product: '<S123>/Divide'
   *  Product: '<S126>/Multiply1'
   */
  rtb_M_OC_tmp_0 = rtb_Multiply2 * rtb_Sum_gn_idx_1;

  /* Gain: '<S124>/Gain1' incorporates:
   *  Product: '<S124>/Multiply2'
   *  Product: '<S124>/Multiply3'
   *  Sum: '<S124>/Add2'
   */
  rtb_M_OC[2] = (rtb_M_OC_tmp + rtb_M_OC_tmp_0) * INS_P.Gain1_Gain_pl;

  /* Gain: '<S125>/Gain' incorporates:
   *  Sum: '<S125>/Add3'
   */
  rtb_M_OC[3] = (rtb_Gain_b + rtb_ba_mPs2_idx_0) * INS_P.Gain_Gain_j;

  /* Sum: '<S125>/Subtract' incorporates:
   *  Sum: '<S125>/Add'
   *  Sum: '<S125>/Add1'
   */
  rtb_M_OC[4] = (rtb_Gain_gz_idx_2 + rtb_dec_rad) -
    (rtb_DiscreteTimeIntegrator_eh + rtb_ba_mPs2_idx_2);

  /* Product: '<S125>/Multiply2' incorporates:
   *  Product: '<S123>/Divide'
   *  Product: '<S126>/Multiply2'
   */
  rtb_Gain_b = rtb_Sum_gn_idx_1 * rtb_Sum_gn_idx_2;

  /* Product: '<S125>/Multiply3' incorporates:
   *  Product: '<S123>/Divide'
   *  Product: '<S126>/Multiply3'
   */
  rtb_ba_mPs2_idx_0 = rtb_Multiply2 * rtb_Sum_gn_idx_0;

  /* Gain: '<S125>/Gain1' incorporates:
   *  Product: '<S125>/Multiply2'
   *  Product: '<S125>/Multiply3'
   *  Sum: '<S125>/Subtract1'
   */
  rtb_M_OC[5] = (rtb_Gain_b - rtb_ba_mPs2_idx_0) * INS_P.Gain1_Gain_b;

  /* Gain: '<S126>/Gain' incorporates:
   *  Sum: '<S126>/Subtract2'
   */
  rtb_M_OC[6] = (rtb_M_OC_tmp - rtb_M_OC_tmp_0) * INS_P.Gain_Gain_oz;

  /* Gain: '<S126>/Gain1' incorporates:
   *  Sum: '<S126>/Add2'
   */
  rtb_M_OC[7] = (rtb_Gain_b + rtb_ba_mPs2_idx_0) * INS_P.Gain1_Gain_f;

  /* Sum: '<S126>/Subtract' incorporates:
   *  Sum: '<S126>/Add'
   *  Sum: '<S126>/Add1'
   */
  rtb_M_OC[8] = (rtb_Gain_gz_idx_2 + rtb_ba_mPs2_idx_2) -
    (rtb_DiscreteTimeIntegrator_eh + rtb_dec_rad);

  /* Math: '<S113>/Transpose' */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_VectorConcatenate_h[3 * rtb_Saturation1_j_idx_1_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_1_0];
    rtb_VectorConcatenate_h[1 + 3 * rtb_Saturation1_j_idx_1_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 3];
    rtb_VectorConcatenate_h[2 + 3 * rtb_Saturation1_j_idx_1_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 6];
  }

  /* End of Math: '<S113>/Transpose' */

  /* Update for DiscreteIntegrator: '<S113>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S113>/Constant'
   *  Gain: '<S113>/Gain2'
   *  Product: '<S118>/Multiply'
   *  Product: '<S118>/Multiply1'
   *  Product: '<S118>/Multiply2'
   *  Product: '<S118>/Multiply3'
   *  Product: '<S119>/Multiply'
   *  Product: '<S119>/Multiply1'
   *  Product: '<S119>/Multiply2'
   *  Product: '<S119>/Multiply3'
   *  Product: '<S120>/Multiply'
   *  Product: '<S120>/Multiply1'
   *  Product: '<S120>/Multiply2'
   *  Product: '<S120>/Multiply3'
   *  Product: '<S121>/Multiply'
   *  Product: '<S121>/Multiply1'
   *  Product: '<S121>/Multiply2'
   *  Product: '<S121>/Multiply3'
   *  Sum: '<S118>/Add'
   *  Sum: '<S119>/Add'
   *  Sum: '<S120>/Add'
   *  Sum: '<S121>/Add'
   *  Sum: '<S61>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_IC_LOADI = 0U;
  INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[0] += (((rtb_Sum_p_idx_0 *
    INS_P.Constant_Value_p - rtb_Sum_p_idx_1 * rtb_MathFunction[0]) -
    rtb_Switch_kj_idx_2 * rtb_MathFunction[1]) - rtb_Switch_kj_idx_3 *
    rtb_Gain_gz_idx_0) * INS_P.Gain2_Gain_i4 *
    INS_P.DiscreteTimeIntegrator_gainva_j;
  INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[1] += (((rtb_Sum_p_idx_1 *
    INS_P.Constant_Value_p + rtb_Sum_p_idx_0 * rtb_MathFunction[0]) +
    rtb_Switch_kj_idx_2 * rtb_Gain_gz_idx_0) - rtb_Switch_kj_idx_3 *
    rtb_MathFunction[1]) * INS_P.Gain2_Gain_i4 *
    INS_P.DiscreteTimeIntegrator_gainva_j;
  INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[2] += (((rtb_Switch_kj_idx_2 *
    INS_P.Constant_Value_p + rtb_Sum_p_idx_0 * rtb_MathFunction[1]) +
    rtb_Switch_kj_idx_3 * rtb_MathFunction[0]) - rtb_Sum_p_idx_1 *
    rtb_Gain_gz_idx_0) * INS_P.Gain2_Gain_i4 *
    INS_P.DiscreteTimeIntegrator_gainva_j;
  INS_DWork.DiscreteTimeIntegrator_DSTAT_kk[3] += (((rtb_Switch_kj_idx_3 *
    INS_P.Constant_Value_p + rtb_Sum_p_idx_0 * rtb_Gain_gz_idx_0) +
    rtb_Sum_p_idx_1 * rtb_MathFunction[1]) - rtb_Switch_kj_idx_2 *
    rtb_MathFunction[0]) * INS_P.Gain2_Gain_i4 *
    INS_P.DiscreteTimeIntegrator_gainva_j;
  INS_DWork.DiscreteTimeIntegrator_PrevR_bk = (int8_T)rtb_Switch_ol;

  /* End of Outputs for SubSystem: '<S57>/Update' */

  /* Outputs for Atomic SubSystem: '<S57>/Correct' */
  /* Saturate: '<S69>/Saturation2' */
  if (rtb_DiscreteTimeIntegrator_g > INS_P.Saturation2_UpperSat) {
    rtb_DiscreteTimeIntegrator_g = INS_P.Saturation2_UpperSat;
  } else {
    if (rtb_DiscreteTimeIntegrator_g < INS_P.Saturation2_LowerSat) {
      rtb_DiscreteTimeIntegrator_g = INS_P.Saturation2_LowerSat;
    }
  }

  /* End of Outputs for SubSystem: '<S57>/Correct' */

  /* Outputs for Atomic SubSystem: '<S57>/Update' */
  /* Update for DiscreteIntegrator: '<S114>/Discrete-Time Integrator2' */
  INS_DWork.DiscreteTimeIntegrator2_DSTATE[0] +=
    INS_P.DiscreteTimeIntegrator2_gainval * rtb_DiscreteTimeIntegrator_g;
  if (INS_DWork.DiscreteTimeIntegrator2_DSTATE[0] >=
      INS_P.DiscreteTimeIntegrator2_UpperSa) {
    INS_DWork.DiscreteTimeIntegrator2_DSTATE[0] =
      INS_P.DiscreteTimeIntegrator2_UpperSa;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator2_DSTATE[0] <=
        INS_P.DiscreteTimeIntegrator2_LowerSa) {
      INS_DWork.DiscreteTimeIntegrator2_DSTATE[0] =
        INS_P.DiscreteTimeIntegrator2_LowerSa;
    }
  }

  /* End of Outputs for SubSystem: '<S57>/Update' */

  /* Outputs for Atomic SubSystem: '<S57>/Correct' */
  /* Saturate: '<S69>/Saturation2' */
  if (rtb_MathFunction_e_idx_1 > INS_P.Saturation2_UpperSat) {
    rtb_MathFunction_e_idx_1 = INS_P.Saturation2_UpperSat;
  } else {
    if (rtb_MathFunction_e_idx_1 < INS_P.Saturation2_LowerSat) {
      rtb_MathFunction_e_idx_1 = INS_P.Saturation2_LowerSat;
    }
  }

  /* End of Outputs for SubSystem: '<S57>/Correct' */

  /* Outputs for Atomic SubSystem: '<S57>/Update' */
  /* Update for DiscreteIntegrator: '<S114>/Discrete-Time Integrator2' */
  INS_DWork.DiscreteTimeIntegrator2_DSTATE[1] +=
    INS_P.DiscreteTimeIntegrator2_gainval * rtb_MathFunction_e_idx_1;
  if (INS_DWork.DiscreteTimeIntegrator2_DSTATE[1] >=
      INS_P.DiscreteTimeIntegrator2_UpperSa) {
    INS_DWork.DiscreteTimeIntegrator2_DSTATE[1] =
      INS_P.DiscreteTimeIntegrator2_UpperSa;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator2_DSTATE[1] <=
        INS_P.DiscreteTimeIntegrator2_LowerSa) {
      INS_DWork.DiscreteTimeIntegrator2_DSTATE[1] =
        INS_P.DiscreteTimeIntegrator2_LowerSa;
    }
  }

  /* End of Outputs for SubSystem: '<S57>/Update' */

  /* Outputs for Atomic SubSystem: '<S57>/Correct' */
  /* Saturate: '<S69>/Saturation2' */
  if (rtb_MathFunction_e_idx_2 > INS_P.Saturation2_UpperSat) {
    rtb_MathFunction_e_idx_2 = INS_P.Saturation2_UpperSat;
  } else {
    if (rtb_MathFunction_e_idx_2 < INS_P.Saturation2_LowerSat) {
      rtb_MathFunction_e_idx_2 = INS_P.Saturation2_LowerSat;
    }
  }

  /* End of Outputs for SubSystem: '<S57>/Correct' */

  /* Outputs for Atomic SubSystem: '<S57>/Update' */
  /* Update for DiscreteIntegrator: '<S114>/Discrete-Time Integrator2' */
  INS_DWork.DiscreteTimeIntegrator2_DSTATE[2] +=
    INS_P.DiscreteTimeIntegrator2_gainval * rtb_MathFunction_e_idx_2;
  if (INS_DWork.DiscreteTimeIntegrator2_DSTATE[2] >=
      INS_P.DiscreteTimeIntegrator2_UpperSa) {
    INS_DWork.DiscreteTimeIntegrator2_DSTATE[2] =
      INS_P.DiscreteTimeIntegrator2_UpperSa;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator2_DSTATE[2] <=
        INS_P.DiscreteTimeIntegrator2_LowerSa) {
      INS_DWork.DiscreteTimeIntegrator2_DSTATE[2] =
        INS_P.DiscreteTimeIntegrator2_LowerSa;
    }
  }

  /* End of Outputs for SubSystem: '<S57>/Update' */

  /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
  /* Product: '<S65>/Divide' */
  rtb_MathFunction_e_idx_2 = rtb_Sum_p_idx_0 / rtb_Gain_gz_idx_1;
  rtb_MathFunction_e_idx_1 = rtb_Sum_p_idx_1 / rtb_Gain_gz_idx_1;
  rtb_Gain_gz_idx_0 = rtb_Switch_kj_idx_2 / rtb_Gain_gz_idx_1;
  rtb_Multiply2 = rtb_Switch_kj_idx_3 / rtb_Gain_gz_idx_1;

  /* Math: '<S64>/Square1' incorporates:
   *  Product: '<S65>/Divide'
   */
  rtb_dec_rad = rtb_Gain_gz_idx_0 * rtb_Gain_gz_idx_0;

  /* Product: '<S64>/Multiply6' incorporates:
   *  Constant: '<S64>/Constant'
   *  Product: '<S64>/Multiply4'
   *  Product: '<S64>/Multiply5'
   *  Product: '<S65>/Divide'
   *  Sum: '<S64>/Subtract'
   */
  rtb_DiscreteTimeIntegrator_g = (rtb_MathFunction_e_idx_2 * rtb_Gain_gz_idx_0 -
    rtb_Multiply2 * rtb_MathFunction_e_idx_1) * INS_P.Constant_Value_c;

  /* Saturate: '<S64>/Saturation' */
  if (rtb_DiscreteTimeIntegrator_g > INS_P.Saturation_UpperSat_h) {
    rtb_DiscreteTimeIntegrator_g = INS_P.Saturation_UpperSat_h;
  } else {
    if (rtb_DiscreteTimeIntegrator_g < INS_P.Saturation_LowerSat_m) {
      rtb_DiscreteTimeIntegrator_g = INS_P.Saturation_LowerSat_m;
    }
  }

  /* End of Saturate: '<S64>/Saturation' */

  /* Trigonometry: '<S64>/Asin' */
  if (rtb_DiscreteTimeIntegrator_g > 1.0F) {
    rtb_DiscreteTimeIntegrator_g = 1.0F;
  } else {
    if (rtb_DiscreteTimeIntegrator_g < -1.0F) {
      rtb_DiscreteTimeIntegrator_g = -1.0F;
    }
  }

  rtb_Gain_gz_idx_1 = asinf(rtb_DiscreteTimeIntegrator_g);

  /* End of Trigonometry: '<S64>/Asin' */

  /* Trigonometry: '<S64>/Atan1' incorporates:
   *  Constant: '<S64>/Constant'
   *  Constant: '<S64>/Constant1'
   *  Math: '<S64>/Square1'
   *  Math: '<S64>/Square2'
   *  Product: '<S64>/Multiply10'
   *  Product: '<S64>/Multiply7'
   *  Product: '<S64>/Multiply8'
   *  Product: '<S64>/Multiply9'
   *  Product: '<S65>/Divide'
   *  Sum: '<S64>/Add2'
   *  Sum: '<S64>/Add3'
   *  Sum: '<S64>/Subtract1'
   */
  rtb_Gain_gz_idx_2 = atan2f((rtb_MathFunction_e_idx_2 * rtb_Multiply2 +
    rtb_MathFunction_e_idx_1 * rtb_Gain_gz_idx_0) * INS_P.Constant_Value_c,
    INS_P.Constant1_Value_o - (rtb_Multiply2 * rtb_Multiply2 + rtb_dec_rad) *
    INS_P.Constant_Value_c);

  /* Trigonometry: '<S64>/Atan2' incorporates:
   *  Constant: '<S64>/Constant'
   *  Constant: '<S64>/Constant2'
   *  Math: '<S64>/Square'
   *  Math: '<S64>/Square1'
   *  Product: '<S64>/Multiply'
   *  Product: '<S64>/Multiply1'
   *  Product: '<S64>/Multiply2'
   *  Product: '<S64>/Multiply3'
   *  Product: '<S65>/Divide'
   *  Sum: '<S64>/Add'
   *  Sum: '<S64>/Add1'
   *  Sum: '<S64>/Subtract2'
   */
  rtb_Gain_gz_idx_0 = atan2f((rtb_MathFunction_e_idx_2 *
    rtb_MathFunction_e_idx_1 + rtb_Gain_gz_idx_0 * rtb_Multiply2) *
    INS_P.Constant_Value_c, INS_P.Constant2_Value_d - (rtb_MathFunction_e_idx_1 *
    rtb_MathFunction_e_idx_1 + rtb_dec_rad) * INS_P.Constant_Value_c);

  /* Math: '<S59>/Math Function' */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_M_OC[3 * rtb_Saturation1_j_idx_1_0] =
      rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0];
    rtb_M_OC[1 + 3 * rtb_Saturation1_j_idx_1_0] =
      rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0 + 3];
    rtb_M_OC[2 + 3 * rtb_Saturation1_j_idx_1_0] =
      rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0 + 6];
  }

  /* End of Math: '<S59>/Math Function' */

  /* Gain: '<S63>/Gain' */
  rtb_Multiply2 = INS_P.Gain_Gain_f * rtb_Gain_gz_idx_2;

  /* Constant: '<S67>/Constant' */
  rtb_VectorConcatenate_er[8] = INS_P.Constant_Value_j1;

  /* Constant: '<S67>/Constant1' */
  rtb_VectorConcatenate_er[7] = INS_P.Constant1_Value_j;

  /* Constant: '<S67>/Constant2' */
  rtb_VectorConcatenate_er[6] = INS_P.Constant2_Value_a;

  /* Constant: '<S67>/Constant3' */
  rtb_VectorConcatenate_er[2] = INS_P.Constant3_Value;

  /* Constant: '<S67>/Constant4' */
  rtb_VectorConcatenate_er[5] = INS_P.Constant4_Value;

  /* Trigonometry: '<S67>/Trigonometric Function2' incorporates:
   *  Trigonometry: '<S67>/Trigonometric Function'
   */
  rtb_DiscreteTimeIntegrator_g = arm_sin_f32(rtb_Multiply2);

  /* Gain: '<S67>/Gain' incorporates:
   *  Trigonometry: '<S67>/Trigonometric Function2'
   */
  rtb_VectorConcatenate_er[3] = INS_P.Gain_Gain_n * rtb_DiscreteTimeIntegrator_g;

  /* Trigonometry: '<S67>/Trigonometric Function' */
  rtb_VectorConcatenate_er[1] = rtb_DiscreteTimeIntegrator_g;

  /* Trigonometry: '<S67>/Trigonometric Function1' incorporates:
   *  Trigonometry: '<S67>/Trigonometric Function3'
   */
  rtb_DiscreteTimeIntegrator_g = arm_cos_f32(rtb_Multiply2);
  rtb_VectorConcatenate_er[0] = rtb_DiscreteTimeIntegrator_g;

  /* Trigonometry: '<S67>/Trigonometric Function3' */
  rtb_VectorConcatenate_er[4] = rtb_DiscreteTimeIntegrator_g;

  /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */

  /* Update for Delay: '<S57>/Delay' incorporates:
   *  Inport: '<Root>/IMU'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport1'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport2'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport3'
   *  SignalConversion: '<S59>/BusConversion_InsertedFor_Rotation_Data_at_inport_0'
   */
  INS_DWork.Delay_4_DSTATE_d = rtb_Gain_gz_idx_2;
  for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 9;
       rtb_Saturation1_j_idx_0++) {
    INS_DWork.Delay_7_DSTATE[rtb_Saturation1_j_idx_0] =
      rtb_M_OC[rtb_Saturation1_j_idx_0];

    /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
    INS_DWork.Delay_8_DSTATE_l[rtb_Saturation1_j_idx_0] =
      rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_0];

    /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
  }

  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
  INS_DWork.Delay_10_DSTATE[0] = INS_U.IMU.gyr_x;
  INS_DWork.Delay_10_DSTATE[1] = INS_U.IMU.gyr_y;
  INS_DWork.Delay_10_DSTATE[2] = INS_U.IMU.gyr_z;

  /* End of Update for Delay: '<S57>/Delay' */
  /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */
  /* End of Outputs for SubSystem: '<S55>/AHRS' */

  /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
  /* DataTypeConversion: '<S293>/Data Type Conversion4' incorporates:
   *  Constant: '<S298>/Constant'
   *  RelationalOperator: '<S298>/Compare'
   *  SignalConversion: '<S314>/TmpSignal ConversionAtSignal CopyInport1'
   */
  rtb_DataTypeConversion1_m = (int8_T)((int32_T)rtb_LogicalOperator2_g >
    (int32_T)INS_P.Constant_Value_br);

  /* Relay: '<S315>/Relay' */
  if (rtb_Product2 >= INS_P.Relay_OnVal_l) {
    INS_DWork.Relay_Mode_n = true;
  } else {
    if (rtb_Product2 <= INS_P.Relay_OffVal_p) {
      INS_DWork.Relay_Mode_n = false;
    }
  }

  if (INS_DWork.Relay_Mode_n) {
    rtb_DiscreteTimeIntegrator_g = INS_P.Relay_YOn_b;
  } else {
    rtb_DiscreteTimeIntegrator_g = INS_P.Relay_YOff_d;
  }

  /* End of Relay: '<S315>/Relay' */

  /* Relay: '<S315>/Relay1' */
  if (rtb_Product_d4 >= INS_P.Relay1_OnVal_b) {
    INS_DWork.Relay1_Mode = true;
  } else {
    if (rtb_Product_d4 <= INS_P.Relay1_OffVal_n) {
      INS_DWork.Relay1_Mode = false;
    }
  }

  if (INS_DWork.Relay1_Mode) {
    rtb_DiscreteTimeIntegrator_eh = INS_P.Relay1_YOn_b;
  } else {
    rtb_DiscreteTimeIntegrator_eh = INS_P.Relay1_YOff_a;
  }

  /* End of Relay: '<S315>/Relay1' */

  /* DataTypeConversion: '<S293>/Data Type Conversion2' incorporates:
   *  Logic: '<S293>/Logical Operator'
   *  SignalConversion: '<S315>/TmpSignal ConversionAtSignal CopyInport1'
   */
  rtb_DataTypeConversion_b = (int8_T)(rtb_Compare_cio &&
    (rtb_DiscreteTimeIntegrator_g != 0.0F) && (rtb_DiscreteTimeIntegrator_eh !=
    0.0F));

  /* Saturate: '<S293>/Saturation1' incorporates:
   *  Sum: '<S293>/Subtract2'
   */
  u0 = (int8_T)(rtb_DataTypeConversion_b - rtb_DataTypeConversion1_m);
  if (u0 > INS_P.Saturation1_UpperSat_d) {
    u0 = INS_P.Saturation1_UpperSat_d;
  } else {
    if (u0 < INS_P.Saturation1_LowerSat_p) {
      u0 = INS_P.Saturation1_LowerSat_p;
    }
  }

  /* End of Saturate: '<S293>/Saturation1' */

  /* RelationalOperator: '<S296>/Compare' incorporates:
   *  Constant: '<S296>/Constant'
   */
  rtb_LogicalOperator2_g = (u0 > INS_P.Constant_Value_ej5);

  /* Saturate: '<S293>/Saturation' incorporates:
   *  Constant: '<S295>/Constant'
   *  RelationalOperator: '<S295>/Compare'
   *  SignalConversion: '<S316>/TmpSignal ConversionAtSignal CopyInport1'
   *  Sum: '<S293>/Subtract1'
   */
  u0 = (int8_T)((((int32_T)rtb_Compare_ai > (int32_T)INS_P.Constant_Value_jz) -
                 rtb_DataTypeConversion1_m) - rtb_DataTypeConversion_b);
  if (u0 > INS_P.Saturation_UpperSat_m) {
    u0 = INS_P.Saturation_UpperSat_m;
  } else {
    if (u0 < INS_P.Saturation_LowerSat_h5) {
      u0 = INS_P.Saturation_LowerSat_h5;
    }
  }

  /* End of Saturate: '<S293>/Saturation' */

  /* RelationalOperator: '<S297>/Compare' incorporates:
   *  Constant: '<S297>/Constant'
   */
  rtb_LogicalOperator5 = (u0 > INS_P.Constant_Value_m2k);

  /* RelationalOperator: '<S299>/Compare' incorporates:
   *  Constant: '<S299>/Constant'
   */
  rtb_Compare_o = (rtb_DataTypeConversion1_m > INS_P.Constant_Value_bze);

  /* DataTypeConversion: '<S294>/Data Type Conversion3' incorporates:
   *  Constant: '<S304>/Constant'
   *  RelationalOperator: '<S304>/Compare'
   *  SignalConversion: '<S314>/TmpSignal ConversionAtSignal Copy1Inport1'
   */
  rtb_DataTypeConversion1_m = (int8_T)((int32_T)rtb_LogicalOperator3 > (int32_T)
    INS_P.Constant_Value_bz);

  /* DataTypeConversion: '<S294>/Data Type Conversion2' incorporates:
   *  Constant: '<S301>/Constant'
   *  RelationalOperator: '<S301>/Compare'
   *  SignalConversion: '<S317>/TmpSignal ConversionAtSignal CopyInport1'
   */
  rtb_DataTypeConversion2_h = (int8_T)((int32_T)rtb_Compare_c5 > (int32_T)
    INS_P.Constant_Value_ha);

  /* Saturate: '<S294>/Saturation2' incorporates:
   *  Sum: '<S294>/Subtract2'
   */
  u0 = (int8_T)(rtb_DataTypeConversion2_h - rtb_DataTypeConversion1_m);
  if (u0 > INS_P.Saturation2_UpperSat_l) {
    u0 = INS_P.Saturation2_UpperSat_l;
  } else {
    if (u0 < INS_P.Saturation2_LowerSat_i) {
      u0 = INS_P.Saturation2_LowerSat_i;
    }
  }

  /* End of Saturate: '<S294>/Saturation2' */

  /* RelationalOperator: '<S302>/Compare' incorporates:
   *  Constant: '<S302>/Constant'
   */
  rtb_LogicalOperator3 = (u0 > INS_P.Constant_Value_c1);

  /* DataTypeConversion: '<S294>/Data Type Conversion' incorporates:
   *  Logic: '<S294>/Logical Operator'
   *  SignalConversion: '<S315>/TmpSignal ConversionAtSignal CopyInport1'
   */
  rtb_DataTypeConversion_b = (int8_T)(rtb_Compare_cio &&
    (rtb_DiscreteTimeIntegrator_g != 0.0F) && (rtb_DiscreteTimeIntegrator_eh !=
    0.0F));

  /* Saturate: '<S294>/Saturation' incorporates:
   *  Sum: '<S294>/Subtract1'
   */
  u0 = (int8_T)((rtb_DataTypeConversion_b - rtb_DataTypeConversion1_m) -
                rtb_DataTypeConversion2_h);
  if (u0 > INS_P.Saturation_UpperSat_gx) {
    u0 = INS_P.Saturation_UpperSat_gx;
  } else {
    if (u0 < INS_P.Saturation_LowerSat_co) {
      u0 = INS_P.Saturation_LowerSat_co;
    }
  }

  /* End of Saturate: '<S294>/Saturation' */

  /* RelationalOperator: '<S303>/Compare' incorporates:
   *  Constant: '<S303>/Constant'
   */
  rtb_Compare_jx = (u0 > INS_P.Constant_Value_lc);

  /* Saturate: '<S294>/Saturation1' incorporates:
   *  Constant: '<S300>/Constant'
   *  RelationalOperator: '<S300>/Compare'
   *  SignalConversion: '<S313>/TmpSignal ConversionAtSignal CopyInport1'
   *  Sum: '<S294>/Subtract'
   */
  u0 = (int8_T)(((((int32_T)rtb_FixPtRelationalOperator_cn > (int32_T)
                   INS_P.Constant_Value_pf) - rtb_DataTypeConversion1_m) -
                 rtb_DataTypeConversion2_h) - rtb_DataTypeConversion_b);
  if (u0 > INS_P.Saturation1_UpperSat_ig) {
    u0 = INS_P.Saturation1_UpperSat_ig;
  } else {
    if (u0 < INS_P.Saturation1_LowerSat_g) {
      u0 = INS_P.Saturation1_LowerSat_g;
    }
  }

  /* End of Saturate: '<S294>/Saturation1' */

  /* RelationalOperator: '<S305>/Compare' incorporates:
   *  Constant: '<S305>/Constant'
   */
  rtb_Compare_cy = (u0 > INS_P.Constant_Value_kt);

  /* RelationalOperator: '<S306>/Compare' incorporates:
   *  Constant: '<S306>/Constant'
   */
  rtb_Compare_jc = (rtb_DataTypeConversion1_m > INS_P.Constant_Value_ew);

  /* DiscreteIntegrator: '<S312>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S312>/Constant'
   */
  if ((INS_P.Constant_Value_oi != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator_PrevRe_h != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_f =
      INS_P.DiscreteTimeIntegrator_IC_c;
  }

  rtb_Multiply2 = INS_DWork.DiscreteTimeIntegrator_DSTATE_f;

  /* DiscreteIntegrator: '<S312>/Discrete-Time Integrator1' incorporates:
   *  Constant: '<S312>/Constant'
   *  SignalConversion: '<S307>/TmpSignal ConversionAtSignal Copy1Inport1'
   */
  if (INS_DWork.DiscreteTimeIntegrator1_IC_LO_k != 0) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_h = rtb_Sum2_m;
  }

  if ((INS_P.Constant_Value_oi != 0.0F) ||
      (INS_DWork.DiscreteTimeIntegrator1_PrevR_d != 0)) {
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_h = rtb_Sum2_m;
  }

  rtb_dec_rad = INS_DWork.DiscreteTimeIntegrator1_DSTAT_h;

  /* Product: '<S310>/Multiply' incorporates:
   *  Constant: '<S310>/Constant'
   *  Math: '<S310>/Transpose'
   *  SignalConversion: '<S310>/TmpSignal ConversionAtMultiplyInport2'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_VectorConcatenate[rtb_Saturation1_j_idx_1_0] = rtb_VectorConcatenate_er
      [3 * rtb_Saturation1_j_idx_1_0 + 2] * INS_P.Constant_Value_gd +
      (rtb_VectorConcatenate_er[3 * rtb_Saturation1_j_idx_1_0 + 1] *
       rtb_Memory_m_idx_1 + rtb_VectorConcatenate_er[3 *
       rtb_Saturation1_j_idx_1_0] * rtb_Memory_m_idx_0);
  }

  /* End of Product: '<S310>/Multiply' */

  /* Logic: '<S325>/Logical Operator' */
  rtb_WGS84_pos_valid = (rtb_LogicalOperator2_g || rtb_LogicalOperator5 ||
    rtb_Compare_o);

  /* RelationalOperator: '<S335>/Compare' incorporates:
   *  Constant: '<S335>/Constant'
   */
  rtb_Compare_j = ((int32_T)rtb_WGS84_pos_valid > (int32_T)
                   INS_P.CompareToConstant1_const_i);

  /* DiscreteIntegrator: '<S328>/Discrete-Time Integrator' */
  if (rtb_Compare_j || (INS_DWork.DiscreteTimeIntegrator_PrevR_ky != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_b =
      INS_P.DiscreteTimeIntegrator_IC_g;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_b >=
      INS_P.DiscreteTimeIntegrator_UpperS_p) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_b =
      INS_P.DiscreteTimeIntegrator_UpperS_p;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_b <=
        INS_P.DiscreteTimeIntegrator_LowerS_p) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_b =
        INS_P.DiscreteTimeIntegrator_LowerS_p;
    }
  }

  /* RelationalOperator: '<S338>/Compare' incorporates:
   *  Constant: '<S336>/Constant'
   *  Constant: '<S338>/Constant'
   *  RelationalOperator: '<S336>/Compare'
   */
  rtb_Compare_bx = (((int32_T)rtb_WGS84_pos_valid > (int32_T)
                     INS_P.CompareToConstant2_const_j) > (int32_T)
                    INS_P.Constant_Value_dc);

  /* Logic: '<S328>/Logical Operator1' incorporates:
   *  Delay: '<S328>/Delay'
   *  RelationalOperator: '<S337>/FixPt Relational Operator'
   *  UnitDelay: '<S337>/Delay Input1'
   */
  rtb_LogicalOperator1_cc = (((int32_T)rtb_Compare_bx > (int32_T)
    INS_DWork.DelayInput1_DSTATE_hg) || INS_DWork.Delay_DSTATE_kh);

  /* Product: '<S328>/Multiply' incorporates:
   *  Constant: '<S334>/Constant'
   *  DiscreteIntegrator: '<S328>/Discrete-Time Integrator'
   *  Logic: '<S328>/Logical Operator'
   *  RelationalOperator: '<S334>/Compare'
   */
  rtb_Multiply_jy = (uint16_T)(INS_DWork.DiscreteTimeIntegrator_DSTATE_b <
    INS_P.valid_hold1_time_out ? (int32_T)rtb_LogicalOperator1_cc : 0);

  /* RelationalOperator: '<S323>/Compare' incorporates:
   *  Constant: '<S323>/Constant'
   */
  rtb_Compare_en = (rtb_Multiply_jy > INS_P.Constant_Value_gn);

  /* RelationalOperator: '<S321>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S321>/Delay Input1'
   */
  rtb_FixPtRelationalOperator_p = ((int32_T)rtb_Compare_en > (int32_T)
    INS_DWork.DelayInput1_DSTATE_o);

  /* Logic: '<S326>/Logical Operator' */
  rtb_WGS84_pos_valid = (rtb_Compare_jx || rtb_Compare_cy || rtb_Compare_jc ||
    rtb_LogicalOperator3);

  /* RelationalOperator: '<S348>/Compare' incorporates:
   *  Constant: '<S348>/Constant'
   */
  rtb_Compare_gku = ((int32_T)rtb_WGS84_pos_valid > (int32_T)
                     INS_P.CompareToConstant1_const_a);

  /* DiscreteIntegrator: '<S340>/Discrete-Time Integrator' */
  if (rtb_Compare_gku || (INS_DWork.DiscreteTimeIntegrator_PrevRe_l != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_c =
      INS_P.DiscreteTimeIntegrator_IC_lb;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_c >=
      INS_P.DiscreteTimeIntegrator_UpperS_j) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_c =
      INS_P.DiscreteTimeIntegrator_UpperS_j;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_c <=
        INS_P.DiscreteTimeIntegrator_Lower_f2) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_c =
        INS_P.DiscreteTimeIntegrator_Lower_f2;
    }
  }

  /* RelationalOperator: '<S351>/Compare' incorporates:
   *  Constant: '<S349>/Constant'
   *  Constant: '<S351>/Constant'
   *  RelationalOperator: '<S349>/Compare'
   */
  rtb_WGS84_pos_valid = (((int32_T)rtb_WGS84_pos_valid > (int32_T)
    INS_P.CompareToConstant2_const_d) > (int32_T)INS_P.Constant_Value_jo);

  /* Logic: '<S340>/Logical Operator1' incorporates:
   *  Delay: '<S340>/Delay'
   *  RelationalOperator: '<S350>/FixPt Relational Operator'
   *  UnitDelay: '<S350>/Delay Input1'
   */
  rtb_LogicalOperator1_ao = (((int32_T)rtb_WGS84_pos_valid > (int32_T)
    INS_DWork.DelayInput1_DSTATE_p) || INS_DWork.Delay_DSTATE_k4);

  /* Product: '<S340>/Multiply' incorporates:
   *  Constant: '<S347>/Constant'
   *  DiscreteIntegrator: '<S340>/Discrete-Time Integrator'
   *  Logic: '<S340>/Logical Operator'
   *  RelationalOperator: '<S347>/Compare'
   */
  rtb_Multiply_o = (uint16_T)(INS_DWork.DiscreteTimeIntegrator_DSTATE_c <
    INS_P.valid_hold1_time_out_m ? (int32_T)rtb_LogicalOperator1_ao : 0);

  /* RelationalOperator: '<S324>/Compare' incorporates:
   *  Constant: '<S324>/Constant'
   */
  rtb_Compare_mx = (rtb_Multiply_o > INS_P.Constant_Value_bt);

  /* RelationalOperator: '<S322>/FixPt Relational Operator' incorporates:
   *  UnitDelay: '<S322>/Delay Input1'
   */
  rtb_FixPtRelationalOperator_fr = ((int32_T)rtb_Compare_mx > (int32_T)
    INS_DWork.DelayInput1_DSTATE_j);

  /* RelationalOperator: '<S330>/Compare' incorporates:
   *  Constant: '<S330>/Constant'
   */
  rtb_Compare_if = ((int32_T)rtb_LogicalOperator2_g > (int32_T)
                    INS_P.CompareToConstant1_const_h);

  /* DiscreteIntegrator: '<S327>/Discrete-Time Integrator' */
  if (rtb_Compare_if || (INS_DWork.DiscreteTimeIntegrator_PrevRe_d != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_n =
      INS_P.DiscreteTimeIntegrator_IC_b;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_n >=
      INS_P.DiscreteTimeIntegrator_Upper_jm) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_n =
      INS_P.DiscreteTimeIntegrator_Upper_jm;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_n <=
        INS_P.DiscreteTimeIntegrator_LowerS_d) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_n =
        INS_P.DiscreteTimeIntegrator_LowerS_d;
    }
  }

  /* RelationalOperator: '<S333>/Compare' incorporates:
   *  Constant: '<S331>/Constant'
   *  Constant: '<S333>/Constant'
   *  RelationalOperator: '<S331>/Compare'
   */
  rtb_Compare_ng = (((int32_T)rtb_LogicalOperator2_g > (int32_T)
                     INS_P.CompareToConstant2_const_a) > (int32_T)
                    INS_P.Constant_Value_nm);

  /* Logic: '<S327>/Logical Operator1' incorporates:
   *  Delay: '<S327>/Delay'
   *  RelationalOperator: '<S332>/FixPt Relational Operator'
   *  UnitDelay: '<S332>/Delay Input1'
   */
  rtb_LogicalOperator1_ng = (((int32_T)rtb_Compare_ng > (int32_T)
    INS_DWork.DelayInput1_DSTATE_kh) || INS_DWork.Delay_DSTATE_ng);

  /* Product: '<S327>/Multiply' incorporates:
   *  Constant: '<S329>/Constant'
   *  DiscreteIntegrator: '<S327>/Discrete-Time Integrator'
   *  Logic: '<S327>/Logical Operator'
   *  RelationalOperator: '<S329>/Compare'
   */
  rtb_Multiply_cb = (uint16_T)(INS_DWork.DiscreteTimeIntegrator_DSTATE_n <
    INS_P.valid_hold_time_out ? (int32_T)rtb_LogicalOperator1_ng : 0);

  /* RelationalOperator: '<S343>/Compare' incorporates:
   *  Constant: '<S343>/Constant'
   */
  rtb_Compare_cd = ((int32_T)rtb_Compare_jx > (int32_T)
                    INS_P.CompareToConstant1_const_hv);

  /* DiscreteIntegrator: '<S339>/Discrete-Time Integrator' */
  if (rtb_Compare_cd || (INS_DWork.DiscreteTimeIntegrator_PrevRe_b != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_h =
      INS_P.DiscreteTimeIntegrator_IC_h;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_h >=
      INS_P.DiscreteTimeIntegrator_Upper_fv) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_h =
      INS_P.DiscreteTimeIntegrator_Upper_fv;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_h <=
        INS_P.DiscreteTimeIntegrator_LowerS_b) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_h =
        INS_P.DiscreteTimeIntegrator_LowerS_b;
    }
  }

  /* RelationalOperator: '<S346>/Compare' incorporates:
   *  Constant: '<S344>/Constant'
   *  Constant: '<S346>/Constant'
   *  RelationalOperator: '<S344>/Compare'
   */
  rtb_Compare_ah = (((int32_T)rtb_Compare_jx > (int32_T)
                     INS_P.CompareToConstant2_const_dj) > (int32_T)
                    INS_P.Constant_Value_ej);

  /* Logic: '<S339>/Logical Operator1' incorporates:
   *  Delay: '<S339>/Delay'
   *  RelationalOperator: '<S345>/FixPt Relational Operator'
   *  UnitDelay: '<S345>/Delay Input1'
   */
  rtb_LogicalOperator1_nd = (((int32_T)rtb_Compare_ah > (int32_T)
    INS_DWork.DelayInput1_DSTATE_ch) || INS_DWork.Delay_DSTATE_c1);

  /* RelationalOperator: '<S353>/Compare' incorporates:
   *  Constant: '<S353>/Constant'
   */
  rtb_Compare_d3 = ((int32_T)rtb_LogicalOperator3 > (int32_T)
                    INS_P.CompareToConstant1_const_l);

  /* DiscreteIntegrator: '<S341>/Discrete-Time Integrator' */
  if (rtb_Compare_d3 || (INS_DWork.DiscreteTimeIntegrator_PrevR_kt != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 =
      INS_P.DiscreteTimeIntegrator_IC_ms;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 >=
      INS_P.DiscreteTimeIntegrator_UpperS_e) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 =
      INS_P.DiscreteTimeIntegrator_UpperS_e;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 <=
        INS_P.DiscreteTimeIntegrator_Lower_no) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 =
        INS_P.DiscreteTimeIntegrator_Lower_no;
    }
  }

  /* RelationalOperator: '<S356>/Compare' incorporates:
   *  Constant: '<S354>/Constant'
   *  Constant: '<S356>/Constant'
   *  RelationalOperator: '<S354>/Compare'
   */
  rtb_Compare_a2 = (((int32_T)rtb_LogicalOperator3 > (int32_T)
                     INS_P.CompareToConstant2_const_h) > (int32_T)
                    INS_P.Constant_Value_i);

  /* Logic: '<S341>/Logical Operator1' incorporates:
   *  Delay: '<S341>/Delay'
   *  RelationalOperator: '<S355>/FixPt Relational Operator'
   *  UnitDelay: '<S355>/Delay Input1'
   */
  rtb_LogicalOperator1_f1 = (((int32_T)rtb_Compare_a2 > (int32_T)
    INS_DWork.DelayInput1_DSTATE_jx) || INS_DWork.Delay_DSTATE_n2);

  /* Product: '<S341>/Multiply' incorporates:
   *  Constant: '<S352>/Constant'
   *  DiscreteIntegrator: '<S341>/Discrete-Time Integrator'
   *  Logic: '<S341>/Logical Operator'
   *  RelationalOperator: '<S352>/Compare'
   */
  rtb_Multiply_gs = (uint16_T)(INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 <
    INS_P.valid_hold2_time_out ? (int32_T)rtb_LogicalOperator1_f1 : 0);

  /* RelationalOperator: '<S362>/Compare' incorporates:
   *  Constant: '<S342>/Constant'
   *  Constant: '<S362>/Constant'
   *  DiscreteIntegrator: '<S339>/Discrete-Time Integrator'
   *  Logic: '<S339>/Logical Operator'
   *  Product: '<S339>/Multiply'
   *  RelationalOperator: '<S342>/Compare'
   */
  rtb_Compare_e0 = ((INS_DWork.DiscreteTimeIntegrator_DSTATE_h <
                     INS_P.valid_hold_time_out_d ? (int32_T)
                     rtb_LogicalOperator1_nd : 0) > INS_P.Constant_Value_m3);

  /* Switch: '<S359>/Switch4' incorporates:
   *  Delay: '<S359>/Delay1'
   *  Delay: '<S56>/Delay'
   *  RelationalOperator: '<S361>/FixPt Relational Operator'
   *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy5Inport1'
   *  Sum: '<S359>/Sum'
   *  UnitDelay: '<S361>/Delay Input1'
   */
  if ((int32_T)rtb_Compare_e0 > (int32_T)INS_DWork.DelayInput1_DSTATE_dp) {
    rtb_ff = rtb_Scalefactor3 - INS_DWork.Delay_6_DSTATE;
  } else {
    rtb_ff = INS_DWork.Delay1_DSTATE;
  }

  /* End of Switch: '<S359>/Switch4' */

  /* RelationalOperator: '<S364>/Compare' incorporates:
   *  Constant: '<S364>/Constant'
   */
  rtb_Compare_g = (rtb_Multiply_cb > INS_P.Constant_Value_pti);

  /* Switch: '<S360>/Switch1' incorporates:
   *  Delay: '<S360>/Delay'
   *  Delay: '<S360>/Delay1'
   *  Delay: '<S56>/Delay'
   *  Product: '<S360>/Divide'
   *  RelationalOperator: '<S363>/FixPt Relational Operator'
   *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy1Inport1'
   *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy3Inport1'
   *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy4Inport1'
   *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal CopyInport1'
   *  Sum: '<S360>/Sum'
   *  Switch: '<S360>/Switch4'
   *  UnitDelay: '<S363>/Delay Input1'
   */
  if ((int32_T)rtb_Compare_g > (int32_T)INS_DWork.DelayInput1_DSTATE_mw) {
    rtb_DataTypeConversion1 = INS_B.Rm;
    rtb_DataTypeConversion2 = INS_B.Multiply2;
    rtb_Switch4_c_idx_0 = rtb_Scalefactor1 - INS_DWork.Delay_4_DSTATE_k /
      INS_B.Rm;
    rtb_Switch4_c_idx_1 = rtb_Scalefactor2 - INS_DWork.Delay_5_DSTATE /
      INS_B.Multiply2;
  } else {
    rtb_DataTypeConversion1 = INS_DWork.Delay1_DSTATE_o[0];
    rtb_DataTypeConversion2 = INS_DWork.Delay1_DSTATE_o[1];
    rtb_Switch4_c_idx_0 = INS_DWork.Delay_DSTATE[0];
    rtb_Switch4_c_idx_1 = INS_DWork.Delay_DSTATE[1];
  }

  /* End of Switch: '<S360>/Switch1' */

  /* Update for DiscreteIntegrator: '<S312>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S312>/Constant'
   *  DiscreteIntegrator: '<S312>/Discrete-Time Integrator1'
   *  DiscreteIntegrator: '<S312>/Discrete-Time Integrator1'
   *  Gain: '<S312>/Gain'
   *  Gain: '<S312>/Gain1'
   *  SignalConversion: '<S307>/TmpSignal ConversionAtSignal Copy1Inport1'
   *  Sum: '<S312>/Sum'
   *  Sum: '<S312>/Sum2'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_f += ((rtb_Sum2_m -
    INS_DWork.DiscreteTimeIntegrator1_DSTAT_h) * INS_P.Gain_Gain_b -
    INS_P.Gain1_Gain_c * INS_DWork.DiscreteTimeIntegrator_DSTATE_f) *
    INS_P.DiscreteTimeIntegrator_gainva_b;
  if (INS_P.Constant_Value_oi > 0.0F) {
    INS_DWork.DiscreteTimeIntegrator_PrevRe_h = 1;
    INS_DWork.DiscreteTimeIntegrator1_PrevR_d = 1;
  } else {
    if (INS_P.Constant_Value_oi < 0.0F) {
      INS_DWork.DiscreteTimeIntegrator_PrevRe_h = -1;
    } else if (INS_P.Constant_Value_oi == 0.0F) {
      INS_DWork.DiscreteTimeIntegrator_PrevRe_h = 0;
    } else {
      INS_DWork.DiscreteTimeIntegrator_PrevRe_h = 2;
    }

    if (INS_P.Constant_Value_oi < 0.0F) {
      INS_DWork.DiscreteTimeIntegrator1_PrevR_d = -1;
    } else if (INS_P.Constant_Value_oi == 0.0F) {
      INS_DWork.DiscreteTimeIntegrator1_PrevR_d = 0;
    } else {
      INS_DWork.DiscreteTimeIntegrator1_PrevR_d = 2;
    }
  }

  /* End of Update for DiscreteIntegrator: '<S312>/Discrete-Time Integrator' */

  /* Update for DiscreteIntegrator: '<S312>/Discrete-Time Integrator1' */
  INS_DWork.DiscreteTimeIntegrator1_IC_LO_k = 0U;
  INS_DWork.DiscreteTimeIntegrator1_DSTAT_h +=
    INS_P.DiscreteTimeIntegrator1_gainv_d * rtb_Multiply2;

  /* Update for UnitDelay: '<S321>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_o = rtb_Compare_en;

  /* Update for DiscreteIntegrator: '<S328>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S328>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_b +=
    INS_P.DiscreteTimeIntegrator_gainv_bt * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_b >=
      INS_P.DiscreteTimeIntegrator_UpperS_p) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_b =
      INS_P.DiscreteTimeIntegrator_UpperS_p;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_b <=
        INS_P.DiscreteTimeIntegrator_LowerS_p) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_b =
        INS_P.DiscreteTimeIntegrator_LowerS_p;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevR_ky = (int8_T)rtb_Compare_j;

  /* End of Update for DiscreteIntegrator: '<S328>/Discrete-Time Integrator' */

  /* Update for UnitDelay: '<S337>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_hg = rtb_Compare_bx;

  /* Update for Delay: '<S328>/Delay' */
  INS_DWork.Delay_DSTATE_kh = rtb_LogicalOperator1_cc;

  /* Update for UnitDelay: '<S322>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_j = rtb_Compare_mx;

  /* Update for DiscreteIntegrator: '<S340>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S340>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_c +=
    INS_P.DiscreteTimeIntegrator_gainv_jo * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_c >=
      INS_P.DiscreteTimeIntegrator_UpperS_j) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_c =
      INS_P.DiscreteTimeIntegrator_UpperS_j;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_c <=
        INS_P.DiscreteTimeIntegrator_Lower_f2) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_c =
        INS_P.DiscreteTimeIntegrator_Lower_f2;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevRe_l = (int8_T)rtb_Compare_gku;

  /* End of Update for DiscreteIntegrator: '<S340>/Discrete-Time Integrator' */

  /* Update for UnitDelay: '<S350>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_p = rtb_WGS84_pos_valid;

  /* Update for Delay: '<S340>/Delay' */
  INS_DWork.Delay_DSTATE_k4 = rtb_LogicalOperator1_ao;

  /* Update for DiscreteIntegrator: '<S327>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S327>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_n +=
    INS_P.DiscreteTimeIntegrator_gainv_iy * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_n >=
      INS_P.DiscreteTimeIntegrator_Upper_jm) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_n =
      INS_P.DiscreteTimeIntegrator_Upper_jm;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_n <=
        INS_P.DiscreteTimeIntegrator_LowerS_d) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_n =
        INS_P.DiscreteTimeIntegrator_LowerS_d;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevRe_d = (int8_T)rtb_Compare_if;

  /* End of Update for DiscreteIntegrator: '<S327>/Discrete-Time Integrator' */

  /* Update for Delay: '<S327>/Delay' */
  INS_DWork.Delay_DSTATE_ng = rtb_LogicalOperator1_ng;

  /* Update for UnitDelay: '<S332>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_kh = rtb_Compare_ng;

  /* Update for DiscreteIntegrator: '<S339>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S339>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_h +=
    INS_P.DiscreteTimeIntegrator_gainva_a * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_h >=
      INS_P.DiscreteTimeIntegrator_Upper_fv) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_h =
      INS_P.DiscreteTimeIntegrator_Upper_fv;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_h <=
        INS_P.DiscreteTimeIntegrator_LowerS_b) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_h =
        INS_P.DiscreteTimeIntegrator_LowerS_b;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevRe_b = (int8_T)rtb_Compare_cd;

  /* End of Update for DiscreteIntegrator: '<S339>/Discrete-Time Integrator' */

  /* Update for Delay: '<S339>/Delay' */
  INS_DWork.Delay_DSTATE_c1 = rtb_LogicalOperator1_nd;

  /* Update for UnitDelay: '<S345>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_ch = rtb_Compare_ah;

  /* Update for DiscreteIntegrator: '<S341>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S341>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 +=
    INS_P.DiscreteTimeIntegrator_gainv_jp * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 >=
      INS_P.DiscreteTimeIntegrator_UpperS_e) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 =
      INS_P.DiscreteTimeIntegrator_UpperS_e;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 <=
        INS_P.DiscreteTimeIntegrator_Lower_no) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 =
        INS_P.DiscreteTimeIntegrator_Lower_no;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevR_kt = (int8_T)rtb_Compare_d3;

  /* End of Update for DiscreteIntegrator: '<S341>/Discrete-Time Integrator' */

  /* Update for Delay: '<S341>/Delay' */
  INS_DWork.Delay_DSTATE_n2 = rtb_LogicalOperator1_f1;

  /* Update for UnitDelay: '<S355>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_jx = rtb_Compare_a2;

  /* Update for Delay: '<S359>/Delay1' */
  INS_DWork.Delay1_DSTATE = rtb_ff;

  /* Update for UnitDelay: '<S361>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_dp = rtb_Compare_e0;

  /* Update for Delay: '<S360>/Delay' */
  INS_DWork.Delay_DSTATE[0] = rtb_Switch4_c_idx_0;

  /* Update for Delay: '<S360>/Delay1' */
  INS_DWork.Delay1_DSTATE_o[0] = rtb_DataTypeConversion1;

  /* Update for Delay: '<S360>/Delay' */
  INS_DWork.Delay_DSTATE[1] = rtb_Switch4_c_idx_1;

  /* Update for Delay: '<S360>/Delay1' */
  INS_DWork.Delay1_DSTATE_o[1] = rtb_DataTypeConversion2;

  /* Update for UnitDelay: '<S363>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_mw = rtb_Compare_g;

  /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* Outputs for Enabled SubSystem: '<S280>/GPS_Reference_Height' incorporates:
   *  EnablePort: '<S283>/Enable'
   */
  if (rtb_Compare_jx) {
    /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
    /* DataTypeConversion: '<S283>/Data Type Conversion' incorporates:
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy5Inport1'
     *  Sum: '<S283>/Sum'
     */
    INS_B.Merge = (real32_T)(rtb_Scalefactor3 - rtb_ff);

    /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
  }

  /* End of Outputs for SubSystem: '<S280>/GPS_Reference_Height' */

  /* Outputs for Enabled SubSystem: '<S281>/GPS_Velocity' incorporates:
   *  EnablePort: '<S286>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S280>/Baro_Reference_Height' incorporates:
   *  EnablePort: '<S282>/Enable'
   */
  if (rtb_Compare_cy) {
    /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
    /* DataTypeConversion: '<S282>/Data Type Conversion' incorporates:
     *  SignalConversion: '<S307>/TmpSignal ConversionAtSignal Copy1Inport1'
     */
    INS_B.Merge = rtb_Sum2_m;

    /* DataTypeConversion: '<S286>/Data Type Conversion' incorporates:
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy8Inport1'
     */
    INS_B.Merge_e = rtb_Gain2_a;

    /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
  }

  /* End of Outputs for SubSystem: '<S280>/Baro_Reference_Height' */
  /* End of Outputs for SubSystem: '<S281>/GPS_Velocity' */

  /* Outputs for Enabled SubSystem: '<S280>/Rf_Reference_Height' incorporates:
   *  EnablePort: '<S284>/Enable'
   */
  if (rtb_LogicalOperator3) {
    /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
    /* DataTypeConversion: '<S284>/Data Type Conversion' incorporates:
     *  SignalConversion: '<S311>/TmpSignal ConversionAtSignal Copy1Inport1'
     */
    INS_B.Merge = rtb_Saturation_a;

    /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
  }

  /* End of Outputs for SubSystem: '<S280>/Rf_Reference_Height' */

  /* Outputs for Enabled SubSystem: '<S281>/Baro_Velocity' */
  INS_Baro_Velocity(rtb_Compare_cy, &INS_B.Merge_e, &INS_P.Baro_Velocity);

  /* End of Outputs for SubSystem: '<S281>/Baro_Velocity' */

  /* Outputs for Enabled SubSystem: '<S281>/Rf_Velocity' */
  INS_Baro_Velocity(rtb_Compare_cy, &INS_B.Merge_e, &INS_P.Rf_Velocity);

  /* End of Outputs for SubSystem: '<S281>/Rf_Velocity' */

  /* Switch: '<S277>/Switch' incorporates:
   *  Constant: '<S279>/Constant'
   *  Delay: '<S277>/Delay'
   */
  if (rtb_FixPtRelationalOperator_fr) {
    rtb_MathFunction[0] = INS_B.Merge;
    rtb_MathFunction[1] = INS_B.Merge_e;
    rtb_MathFunction[2] = INS_P.Constant_Value_e;
  } else {
    rtb_MathFunction[0] = INS_DWork.Delay_DSTATE_b[0];
    rtb_MathFunction[1] = INS_DWork.Delay_DSTATE_b[1];
    rtb_MathFunction[2] = INS_DWork.Delay_DSTATE_b[2];
  }

  /* End of Switch: '<S277>/Switch' */

  /* Product: '<S278>/Multiply' incorporates:
   *  SignalConversion: '<S59>/BusConversion_InsertedFor_Rotation_Data_at_inport_0'
   *  SignalConversion: '<S59>/TmpSignal ConversionAtSignal ConversionInport1'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
    /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
    rtb_Gain_ok[rtb_Saturation1_j_idx_1_0] =
      rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0 + 6] *
      rtb_VectorConcatenate1[2] +
      (rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0 + 3] *
       rtb_VectorConcatenate1[1] +
       rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0] *
       rtb_VectorConcatenate1[0]);

    /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
    /* End of Outputs for SubSystem: '<S55>/AHRS' */
  }

  /* Sum: '<S278>/Sum' incorporates:
   *  Constant: '<S278>/Constant'
   *  Constant: '<S278>/Constant1'
   *  Gain: '<S278>/Gain'
   *  Gain: '<S278>/Gain1'
   *  Product: '<S278>/Multiply'
   *  Sum: '<S278>/Add'
   */
  rtb_Gauss_to_uT[0] = INS_P.Gain1_Gain_k * rtb_MathFunction[1] *
    INS_P.Gain_Gain_mr + rtb_MathFunction[0];
  rtb_Gauss_to_uT[1] = ((rtb_Gain_ok[2] - rtb_MathFunction[2]) +
                        INS_P.INS_CONST.g) * INS_P.Gain_Gain_mr +
    rtb_MathFunction[1];
  rtb_Gauss_to_uT[2] = INS_P.Gain_Gain_mr * INS_P.Constant_Value_nn +
    rtb_MathFunction[2];

  /* Outputs for Enabled SubSystem: '<S236>/Baro_Correct' incorporates:
   *  EnablePort: '<S240>/Enable'
   */
  if (rtb_Compare_cy) {
    if (!INS_DWork.Baro_Correct_MODE) {
      /* InitializeConditions for UnitDelay: '<S241>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_lg = INS_P.DetectChange_vinit_m;

      /* InitializeConditions for Delay: '<S242>/Delay' */
      INS_DWork.Delay_DSTATE_dr[0] = INS_P.Delay_InitialCondition_j;
      INS_DWork.Delay_DSTATE_dr[1] = INS_P.Delay_InitialCondition_j;
      INS_DWork.Delay_DSTATE_dr[2] = INS_P.Delay_InitialCondition_j;

      /* InitializeConditions for Delay: '<S244>/x_delay' */
      INS_DWork.icLoad_a = 1U;

      /* InitializeConditions for UnitDelay: '<S248>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_f = INS_P.DetectIncrease_vinit_c;

      /* InitializeConditions for Delay: '<S246>/Delay' */
      INS_DWork.Delay_DSTATE_h = INS_P.Delay_InitialCondition_mk;
      INS_DWork.Baro_Correct_MODE = true;
    }

    /* Delay: '<S244>/x_delay' */
    if (rtb_FixPtRelationalOperator_fr &&
        (INS_PrevZCSigState.x_delay_Reset_ZCE_l != POS_ZCSIG)) {
      INS_DWork.icLoad_a = 1U;
    }

    INS_PrevZCSigState.x_delay_Reset_ZCE_l = rtb_FixPtRelationalOperator_fr;
    if (INS_DWork.icLoad_a != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 5;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.x_delay_DSTATE_b[rtb_Saturation1_j_idx_0] = rtb_Gauss_to_uT[0];
      }
    }

    /* RelationalOperator: '<S248>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S248>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (1 > (int32_T)INS_DWork.DelayInput1_DSTATE_f);

    /* Switch: '<S246>/Switch' incorporates:
     *  Delay: '<S246>/Delay'
     *  Sum: '<S247>/Sum'
     */
    if (rtb_WGS84_pos_valid) {
      rtb_Multiply2 = rtb_Gauss_to_uT[0] - rtb_dec_rad;
    } else {
      rtb_Multiply2 = INS_DWork.Delay_DSTATE_h;
    }

    /* End of Switch: '<S246>/Switch' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/Baro_PreProcess' */
    /* Logic: '<S240>/Logical Operator' incorporates:
     *  Inport: '<Root>/Barometer'
     *  RelationalOperator: '<S241>/FixPt Relational Operator'
     *  SignalConversion: '<S366>/BusConversion_InsertedFor_Baro_Data_at_inport_0'
     *  UnitDelay: '<S241>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (rtb_WGS84_pos_valid || (INS_U.Barometer.timestamp !=
      INS_DWork.DelayInput1_DSTATE_lg));

    /* End of Outputs for SubSystem: '<S3>/Baro_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Switch: '<S242>/Switch' incorporates:
     *  Delay: '<S242>/Delay'
     *  Gain: '<S243>/Gain'
     *  Gain: '<S243>/Gain1'
     *  Gain: '<S243>/Gain2'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      /* Sum: '<S240>/Sum' incorporates:
       *  Delay: '<S244>/x_delay'
       *  SignalConversion: '<S307>/TmpSignal ConversionAtSignal Copy1Inport1'
       *  Sum: '<S245>/Sum1'
       */
      rtb_Sum2_m = (rtb_Sum2_m + rtb_Multiply2) - INS_DWork.x_delay_DSTATE_b[0];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

      /* Saturate: '<S243>/Saturation' */
      if (rtb_Sum2_m > INS_P.Saturation_UpperSat_b) {
        rtb_Sum2_m = INS_P.Saturation_UpperSat_b;
      } else {
        if (rtb_Sum2_m < INS_P.Saturation_LowerSat_c) {
          rtb_Sum2_m = INS_P.Saturation_LowerSat_c;
        }
      }

      /* End of Saturate: '<S243>/Saturation' */
      rtb_MathFunction[0] = INS_PARAM.BARO_H_GAIN * rtb_Sum2_m;
      rtb_MathFunction[1] = -INS_PARAM.BARO_VZ_GAIN * rtb_Sum2_m;
      rtb_MathFunction[2] = INS_PARAM.BARO_BIAS_AZ_GAIN * rtb_Sum2_m;
    } else {
      rtb_MathFunction[0] = INS_DWork.Delay_DSTATE_dr[0];
      rtb_MathFunction[1] = INS_DWork.Delay_DSTATE_dr[1];
      rtb_MathFunction[2] = INS_DWork.Delay_DSTATE_dr[2];
    }

    /* End of Switch: '<S242>/Switch' */

    /* Sum: '<S240>/Sum1' incorporates:
     *  Gain: '<S242>/Gain'
     */
    INS_B.Sum1_pu[0] = INS_P.Gain_Gain_pln * rtb_MathFunction[0] +
      rtb_Gauss_to_uT[0];

    /* Update for Delay: '<S242>/Delay' incorporates:
     *  Gain: '<S242>/Gain'
     */
    INS_DWork.Delay_DSTATE_dr[0] = rtb_MathFunction[0];

    /* Sum: '<S240>/Sum1' incorporates:
     *  Gain: '<S242>/Gain'
     */
    INS_B.Sum1_pu[1] = INS_P.Gain_Gain_pln * rtb_MathFunction[1] +
      rtb_Gauss_to_uT[1];

    /* Update for Delay: '<S242>/Delay' incorporates:
     *  Gain: '<S242>/Gain'
     */
    INS_DWork.Delay_DSTATE_dr[1] = rtb_MathFunction[1];

    /* Sum: '<S240>/Sum1' incorporates:
     *  Gain: '<S242>/Gain'
     */
    INS_B.Sum1_pu[2] = INS_P.Gain_Gain_pln * rtb_MathFunction[2] +
      rtb_Gauss_to_uT[2];

    /* Update for Delay: '<S242>/Delay' incorporates:
     *  Gain: '<S242>/Gain'
     */
    INS_DWork.Delay_DSTATE_dr[2] = rtb_MathFunction[2];

    /* Saturate: '<S240>/Saturation' */
    if (INS_B.Sum1_pu[2] > INS_P.Saturation_UpperSat_as) {
      INS_B.Saturation = INS_P.Saturation_UpperSat_as;
    } else if (INS_B.Sum1_pu[2] < INS_P.Saturation_LowerSat_e) {
      INS_B.Saturation = INS_P.Saturation_LowerSat_e;
    } else {
      INS_B.Saturation = INS_B.Sum1_pu[2];
    }

    /* End of Saturate: '<S240>/Saturation' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/Baro_PreProcess' */
    /* Update for UnitDelay: '<S241>/Delay Input1' incorporates:
     *  Inport: '<Root>/Barometer'
     *  SignalConversion: '<S366>/BusConversion_InsertedFor_Baro_Data_at_inport_0'
     */
    INS_DWork.DelayInput1_DSTATE_lg = INS_U.Barometer.timestamp;

    /* End of Outputs for SubSystem: '<S3>/Baro_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Update for Delay: '<S244>/x_delay' */
    INS_DWork.icLoad_a = 0U;
    INS_DWork.x_delay_DSTATE_b[0] = INS_DWork.x_delay_DSTATE_b[1];
    INS_DWork.x_delay_DSTATE_b[1] = INS_DWork.x_delay_DSTATE_b[2];
    INS_DWork.x_delay_DSTATE_b[2] = INS_DWork.x_delay_DSTATE_b[3];
    INS_DWork.x_delay_DSTATE_b[3] = INS_DWork.x_delay_DSTATE_b[4];
    INS_DWork.x_delay_DSTATE_b[4] = rtb_Gauss_to_uT[0];

    /* Update for UnitDelay: '<S248>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_f = true;

    /* Update for Delay: '<S246>/Delay' */
    INS_DWork.Delay_DSTATE_h = rtb_Multiply2;

    /* Switch: '<S236>/Switch' */
    rtb_MathFunction[0] = INS_B.Sum1_pu[0];
    rtb_MathFunction[1] = INS_B.Sum1_pu[1];
    rtb_MathFunction[2] = INS_B.Saturation;
  } else {
    if (INS_DWork.Baro_Correct_MODE) {
      INS_DWork.Baro_Correct_MODE = false;
    }

    /* Switch: '<S236>/Switch' */
    rtb_MathFunction[0] = rtb_Gauss_to_uT[0];
    rtb_MathFunction[1] = rtb_Gauss_to_uT[1];
    rtb_MathFunction[2] = rtb_Gauss_to_uT[2];
  }

  /* End of Outputs for SubSystem: '<S236>/Baro_Correct' */

  /* Outputs for Enabled SubSystem: '<S238>/GPS_Correct' incorporates:
   *  EnablePort: '<S258>/Enable'
   */
  /* Switch: '<S238>/Switch' */
  if (rtb_Compare_jx) {
    if (!INS_DWork.GPS_Correct_MODE) {
      /* InitializeConditions for UnitDelay: '<S259>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_d = INS_P.DetectChange_vinit_h;

      /* InitializeConditions for Delay: '<S262>/h_delay' */
      INS_DWork.icLoad_o = 1U;

      /* InitializeConditions for Delay: '<S262>/vd_delay' */
      INS_DWork.icLoad_f = 1U;

      /* InitializeConditions for UnitDelay: '<S266>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_ib = INS_P.DetectIncrease_vinit_ji;

      /* InitializeConditions for Memory: '<S264>/Memory' */
      INS_DWork.Memory_PreviousInput_b = INS_P.Memory_InitialCondition_p;

      /* InitializeConditions for Memory: '<S260>/Memory' */
      INS_DWork.Memory_PreviousInput_e[0] = INS_P.Memory_InitialCondition_c;
      INS_DWork.Memory_PreviousInput_e[1] = INS_P.Memory_InitialCondition_c;
      INS_DWork.Memory_PreviousInput_e[2] = INS_P.Memory_InitialCondition_c;
      INS_DWork.GPS_Correct_MODE = true;
    }

    /* Delay: '<S262>/h_delay' */
    if (rtb_FixPtRelationalOperator_fr &&
        (INS_PrevZCSigState.h_delay_Reset_ZCE_m != POS_ZCSIG)) {
      INS_DWork.icLoad_o = 1U;
    }

    INS_PrevZCSigState.h_delay_Reset_ZCE_m = rtb_FixPtRelationalOperator_fr;
    if (INS_DWork.icLoad_o != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 75;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.h_delay_DSTATE_l[rtb_Saturation1_j_idx_0] = rtb_MathFunction[0];
      }
    }

    /* Delay: '<S262>/vd_delay' */
    if (rtb_FixPtRelationalOperator_fr && (INS_PrevZCSigState.vd_delay_Reset_ZCE
         != POS_ZCSIG)) {
      INS_DWork.icLoad_f = 1U;
    }

    INS_PrevZCSigState.vd_delay_Reset_ZCE = rtb_FixPtRelationalOperator_fr;
    if (INS_DWork.icLoad_f != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 50;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.vd_delay_DSTATE[rtb_Saturation1_j_idx_0] = rtb_MathFunction[1];
      }
    }

    /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
    /* DataTypeConversion: '<S263>/Data Type Conversion' incorporates:
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy5Inport1'
     *  Sum: '<S263>/Sum'
     */
    rtb_Sum2_m = (real32_T)(rtb_Scalefactor3 - rtb_ff);

    /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

    /* RelationalOperator: '<S266>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S266>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (1 > (int32_T)INS_DWork.DelayInput1_DSTATE_ib);

    /* Switch: '<S264>/Switch' incorporates:
     *  DataTypeConversion: '<S263>/Data Type Conversion'
     *  Memory: '<S264>/Memory'
     *  Sum: '<S265>/Sum'
     */
    if (rtb_WGS84_pos_valid) {
      rtb_Multiply2 = rtb_MathFunction[0] - rtb_Sum2_m;
    } else {
      rtb_Multiply2 = INS_DWork.Memory_PreviousInput_b;
    }

    /* End of Switch: '<S264>/Switch' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/Baro_PreProcess' */
    /* Logic: '<S258>/Logical Operator' incorporates:
     *  Inport: '<Root>/Barometer'
     *  RelationalOperator: '<S259>/FixPt Relational Operator'
     *  SignalConversion: '<S366>/BusConversion_InsertedFor_Baro_Data_at_inport_0'
     *  UnitDelay: '<S259>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (rtb_WGS84_pos_valid || (INS_U.Barometer.timestamp !=
      INS_DWork.DelayInput1_DSTATE_d));

    /* End of Outputs for SubSystem: '<S3>/Baro_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Switch: '<S260>/Switch' incorporates:
     *  DataTypeConversion: '<S263>/Data Type Conversion'
     *  Delay: '<S262>/h_delay'
     *  Gain: '<S261>/Gain'
     *  Gain: '<S261>/Gain1'
     *  Gain: '<S261>/Gain2'
     *  Memory: '<S260>/Memory'
     *  Sum: '<S258>/Sum'
     *  Sum: '<S263>/Sum1'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      /* Sum: '<S258>/Sum' incorporates:
       *  Delay: '<S262>/vd_delay'
       *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy8Inport1'
       */
      rtb_Memory_m_idx_1 = rtb_Gain2_a - INS_DWork.vd_delay_DSTATE[0U];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
      rtb_Gauss_to_uT[0] = ((rtb_Sum2_m + rtb_Multiply2) -
                            INS_DWork.h_delay_DSTATE_l[0U]) *
        INS_PARAM.GPS_ALT_GAIN;
      rtb_Gauss_to_uT[1] = INS_PARAM.GPS_VEL_GAIN * rtb_Memory_m_idx_1;
      rtb_Gauss_to_uT[2] = -INS_PARAM.GPS_BIAS_A_GAIN * rtb_Memory_m_idx_1;
    } else {
      rtb_Gauss_to_uT[0] = INS_DWork.Memory_PreviousInput_e[0];
      rtb_Gauss_to_uT[1] = INS_DWork.Memory_PreviousInput_e[1];
      rtb_Gauss_to_uT[2] = INS_DWork.Memory_PreviousInput_e[2];
    }

    /* End of Switch: '<S260>/Switch' */

    /* Sum: '<S258>/Sum1' incorporates:
     *  Gain: '<S260>/Gain3'
     */
    INS_B.Sum1_p[0] = INS_P.Gain3_Gain_k * rtb_Gauss_to_uT[0] +
      rtb_MathFunction[0];
    INS_B.Sum1_p[1] = INS_P.Gain3_Gain_k * rtb_Gauss_to_uT[1] +
      rtb_MathFunction[1];
    INS_B.Sum1_p[2] = INS_P.Gain3_Gain_k * rtb_Gauss_to_uT[2] +
      rtb_MathFunction[2];

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/Baro_PreProcess' */
    /* Update for UnitDelay: '<S259>/Delay Input1' incorporates:
     *  Inport: '<Root>/Barometer'
     *  SignalConversion: '<S366>/BusConversion_InsertedFor_Baro_Data_at_inport_0'
     */
    INS_DWork.DelayInput1_DSTATE_d = INS_U.Barometer.timestamp;

    /* End of Outputs for SubSystem: '<S3>/Baro_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Update for Delay: '<S262>/h_delay' */
    INS_DWork.icLoad_o = 0U;
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 74;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.h_delay_DSTATE_l[rtb_Saturation1_j_idx_0] =
        INS_DWork.h_delay_DSTATE_l[rtb_Saturation1_j_idx_0 + 1];
    }

    INS_DWork.h_delay_DSTATE_l[74] = rtb_MathFunction[0];

    /* End of Update for Delay: '<S262>/h_delay' */

    /* Update for Delay: '<S262>/vd_delay' */
    INS_DWork.icLoad_f = 0U;
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 49;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.vd_delay_DSTATE[rtb_Saturation1_j_idx_0] =
        INS_DWork.vd_delay_DSTATE[rtb_Saturation1_j_idx_0 + 1];
    }

    INS_DWork.vd_delay_DSTATE[49] = rtb_MathFunction[1];

    /* End of Update for Delay: '<S262>/vd_delay' */

    /* Update for UnitDelay: '<S266>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_ib = true;

    /* Update for Memory: '<S264>/Memory' */
    INS_DWork.Memory_PreviousInput_b = rtb_Multiply2;

    /* Update for Memory: '<S260>/Memory' */
    INS_DWork.Memory_PreviousInput_e[0] = rtb_Gauss_to_uT[0];
    INS_DWork.Memory_PreviousInput_e[1] = rtb_Gauss_to_uT[1];
    INS_DWork.Memory_PreviousInput_e[2] = rtb_Gauss_to_uT[2];
    rtb_MathFunction[0] = INS_B.Sum1_p[0];
    rtb_MathFunction[1] = INS_B.Sum1_p[1];
  } else {
    if (INS_DWork.GPS_Correct_MODE) {
      INS_DWork.GPS_Correct_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S238>/GPS_Correct' */
  rtb_DiscreteTimeIntegrator_eh = rtb_MathFunction[2];
  if (rtb_Compare_jx) {
    rtb_DiscreteTimeIntegrator_eh = INS_B.Sum1_p[2];
  }

  /* End of Switch: '<S238>/Switch' */

  /* Outputs for Enabled SubSystem: '<S239>/Rangefinder_Correct' incorporates:
   *  EnablePort: '<S267>/Enable'
   */
  /* Switch: '<S239>/Switch' */
  if (rtb_LogicalOperator3) {
    if (!INS_DWork.Rangefinder_Correct_MODE) {
      /* InitializeConditions for UnitDelay: '<S268>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_l = INS_P.DetectChange_vinit_g;

      /* InitializeConditions for Delay: '<S271>/h_delay' */
      INS_DWork.icLoad = 1U;

      /* InitializeConditions for UnitDelay: '<S275>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_d2 = INS_P.DetectIncrease_vinit_g;

      /* InitializeConditions for Memory: '<S273>/Memory' */
      INS_DWork.Memory_PreviousInput = INS_P.Memory_InitialCondition_o5;

      /* InitializeConditions for Memory: '<S269>/Memory' */
      INS_DWork.Memory_PreviousInput_f[0] = INS_P.Memory_InitialCondition_h;
      INS_DWork.Memory_PreviousInput_f[1] = INS_P.Memory_InitialCondition_h;
      INS_DWork.Memory_PreviousInput_f[2] = INS_P.Memory_InitialCondition_h;
      INS_DWork.Rangefinder_Correct_MODE = true;
    }

    /* Delay: '<S271>/h_delay' */
    if (rtb_FixPtRelationalOperator_fr && (INS_PrevZCSigState.h_delay_Reset_ZCE
         != POS_ZCSIG)) {
      INS_DWork.icLoad = 1U;
    }

    INS_PrevZCSigState.h_delay_Reset_ZCE = rtb_FixPtRelationalOperator_fr;
    if (INS_DWork.icLoad != 0) {
      INS_DWork.h_delay_DSTATE[0] = rtb_MathFunction[0];
      INS_DWork.h_delay_DSTATE[1] = rtb_MathFunction[0];
      INS_DWork.h_delay_DSTATE[2] = rtb_MathFunction[0];
    }

    /* RelationalOperator: '<S275>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S275>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (1 > (int32_T)INS_DWork.DelayInput1_DSTATE_d2);

    /* Switch: '<S273>/Switch' incorporates:
     *  Memory: '<S273>/Memory'
     *  SignalConversion: '<S311>/TmpSignal ConversionAtSignal Copy1Inport1'
     *  Sum: '<S274>/Sum'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      INS_B.rf_height_bias = rtb_MathFunction[0] - rtb_Saturation_a;

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
    } else {
      INS_B.rf_height_bias = INS_DWork.Memory_PreviousInput;
    }

    /* End of Switch: '<S273>/Switch' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/Rangefinder_PreProcess' */
    /* Logic: '<S267>/Logical Operator' incorporates:
     *  Inport: '<Root>/Rangefinder'
     *  RelationalOperator: '<S268>/FixPt Relational Operator'
     *  SignalConversion: '<S372>/BusConversion_InsertedFor_Rangefinder_Data_at_inport_0'
     *  UnitDelay: '<S268>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (rtb_WGS84_pos_valid || (INS_U.Rangefinder.timestamp
      != INS_DWork.DelayInput1_DSTATE_l));

    /* End of Outputs for SubSystem: '<S3>/Rangefinder_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Switch: '<S269>/Switch' incorporates:
     *  Gain: '<S270>/Gain'
     *  Gain: '<S270>/Gain1'
     *  Gain: '<S270>/Gain2'
     *  Memory: '<S269>/Memory'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      /* Sum: '<S267>/Sum' incorporates:
       *  Delay: '<S271>/h_delay'
       *  SignalConversion: '<S311>/TmpSignal ConversionAtSignal Copy1Inport1'
       *  Sum: '<S272>/Sum1'
       */
      rtb_Gain2_a = (rtb_Saturation_a + INS_B.rf_height_bias) -
        INS_DWork.h_delay_DSTATE[0];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

      /* Saturate: '<S270>/Saturation' */
      if (rtb_Gain2_a > INS_P.Saturation_UpperSat_i) {
        rtb_Gain2_a = INS_P.Saturation_UpperSat_i;
      } else {
        if (rtb_Gain2_a < INS_P.Saturation_LowerSat_h) {
          rtb_Gain2_a = INS_P.Saturation_LowerSat_h;
        }
      }

      /* End of Saturate: '<S270>/Saturation' */
      rtb_Gauss_to_uT[0] = INS_PARAM.RF_H_GAIN * rtb_Gain2_a;
      rtb_Gauss_to_uT[1] = -INS_PARAM.RF_VZ_GAIN * rtb_Gain2_a;
      rtb_Gauss_to_uT[2] = INS_PARAM.RF_BIAS_AZ_GAIN * rtb_Gain2_a;
    } else {
      rtb_Gauss_to_uT[0] = INS_DWork.Memory_PreviousInput_f[0];
      rtb_Gauss_to_uT[1] = INS_DWork.Memory_PreviousInput_f[1];
      rtb_Gauss_to_uT[2] = INS_DWork.Memory_PreviousInput_f[2];
    }

    /* End of Switch: '<S269>/Switch' */

    /* Sum: '<S267>/Sum1' incorporates:
     *  Gain: '<S269>/Gain3'
     */
    INS_B.Sum1[0] = INS_P.Gain3_Gain_j * rtb_Gauss_to_uT[0] + rtb_MathFunction[0];
    INS_B.Sum1[1] = INS_P.Gain3_Gain_j * rtb_Gauss_to_uT[1] + rtb_MathFunction[1];
    INS_B.Sum1[2] = INS_P.Gain3_Gain_j * rtb_Gauss_to_uT[2] +
      rtb_DiscreteTimeIntegrator_eh;

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/Rangefinder_PreProcess' */
    /* Update for UnitDelay: '<S268>/Delay Input1' incorporates:
     *  Inport: '<Root>/Rangefinder'
     *  SignalConversion: '<S372>/BusConversion_InsertedFor_Rangefinder_Data_at_inport_0'
     */
    INS_DWork.DelayInput1_DSTATE_l = INS_U.Rangefinder.timestamp;

    /* End of Outputs for SubSystem: '<S3>/Rangefinder_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Update for Delay: '<S271>/h_delay' */
    INS_DWork.icLoad = 0U;
    INS_DWork.h_delay_DSTATE[0] = INS_DWork.h_delay_DSTATE[1];
    INS_DWork.h_delay_DSTATE[1] = INS_DWork.h_delay_DSTATE[2];
    INS_DWork.h_delay_DSTATE[2] = rtb_MathFunction[0];

    /* Update for UnitDelay: '<S275>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_d2 = true;

    /* Update for Memory: '<S273>/Memory' */
    INS_DWork.Memory_PreviousInput = INS_B.rf_height_bias;

    /* Update for Memory: '<S269>/Memory' */
    INS_DWork.Memory_PreviousInput_f[0] = rtb_Gauss_to_uT[0];
    INS_DWork.Memory_PreviousInput_f[1] = rtb_Gauss_to_uT[1];
    INS_DWork.Memory_PreviousInput_f[2] = rtb_Gauss_to_uT[2];
    rtb_MathFunction[0] = INS_B.Sum1[0];
    rtb_MathFunction[1] = INS_B.Sum1[1];
    rtb_DiscreteTimeIntegrator_eh = INS_B.Sum1[2];
  } else {
    if (INS_DWork.Rangefinder_Correct_MODE) {
      INS_DWork.Rangefinder_Correct_MODE = false;
    }
  }

  /* End of Switch: '<S239>/Switch' */
  /* End of Outputs for SubSystem: '<S239>/Rangefinder_Correct' */

  /* Outputs for Enabled SubSystem: '<S237>/ExternalPos_Correct' incorporates:
   *  EnablePort: '<S249>/Enable'
   */
  /* Switch: '<S237>/Switch' */
  if (rtb_Compare_jc) {
    if (!INS_DWork.ExternalPos_Correct_MODE) {
      /* InitializeConditions for UnitDelay: '<S250>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_a = INS_P.DetectChange_vinit_j;

      /* InitializeConditions for Delay: '<S251>/Delay' */
      INS_DWork.Delay_DSTATE_p[0] = INS_P.Delay_InitialCondition_ms;
      INS_DWork.Delay_DSTATE_p[1] = INS_P.Delay_InitialCondition_ms;
      INS_DWork.Delay_DSTATE_p[2] = INS_P.Delay_InitialCondition_ms;

      /* InitializeConditions for Delay: '<S253>/x_delay' */
      INS_DWork.icLoad_p = 1U;

      /* InitializeConditions for UnitDelay: '<S257>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_a4 = INS_P.DetectIncrease_vinit_j;

      /* InitializeConditions for Delay: '<S255>/Delay' */
      INS_DWork.Delay_DSTATE_m = INS_P.Delay_InitialCondition_d2;
      INS_DWork.ExternalPos_Correct_MODE = true;
    }

    /* Delay: '<S253>/x_delay' */
    if (rtb_FixPtRelationalOperator_fr && (INS_PrevZCSigState.x_delay_Reset_ZCE
         != POS_ZCSIG)) {
      INS_DWork.icLoad_p = 1U;
    }

    INS_PrevZCSigState.x_delay_Reset_ZCE = rtb_FixPtRelationalOperator_fr;
    if (INS_DWork.icLoad_p != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 25;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.x_delay_DSTATE[rtb_Saturation1_j_idx_0] = rtb_MathFunction[0];
      }
    }

    /* RelationalOperator: '<S257>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S257>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (1 > (int32_T)INS_DWork.DelayInput1_DSTATE_a4);

    /* Switch: '<S255>/Switch' incorporates:
     *  Delay: '<S255>/Delay'
     *  SignalConversion: '<S308>/TmpSignal ConversionAtSignal Copy4Inport1'
     *  Sum: '<S256>/Sum'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      rtb_Gain2_a = rtb_MathFunction[0] - rtb_Multiply_hs[2];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
    } else {
      rtb_Gain2_a = INS_DWork.Delay_DSTATE_m;
    }

    /* End of Switch: '<S255>/Switch' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/ExternalPos_Process' */
    /* Logic: '<S249>/Logical Operator' incorporates:
     *  Inport: '<Root>/External_Pos'
     *  RelationalOperator: '<S250>/FixPt Relational Operator'
     *  SignalConversion: '<S367>/TmpSignal ConversionAtSignal CopyInport1'
     *  UnitDelay: '<S250>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (rtb_WGS84_pos_valid || (INS_U.External_Pos.timestamp
      != INS_DWork.DelayInput1_DSTATE_a));

    /* End of Outputs for SubSystem: '<S3>/ExternalPos_Process' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Switch: '<S251>/Switch' incorporates:
     *  Delay: '<S251>/Delay'
     *  Gain: '<S252>/Gain'
     *  Gain: '<S252>/Gain1'
     *  Gain: '<S252>/Gain2'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      /* Sum: '<S249>/Sum' incorporates:
       *  Delay: '<S253>/x_delay'
       *  SignalConversion: '<S308>/TmpSignal ConversionAtSignal Copy4Inport1'
       *  Sum: '<S254>/Sum1'
       */
      rtb_Sum2_m = (rtb_Multiply_hs[2] + rtb_Gain2_a) -
        INS_DWork.x_delay_DSTATE[0];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

      /* Saturate: '<S252>/Saturation' */
      if (rtb_Sum2_m > INS_P.Saturation_UpperSat_hz) {
        rtb_Sum2_m = INS_P.Saturation_UpperSat_hz;
      } else {
        if (rtb_Sum2_m < INS_P.Saturation_LowerSat_n) {
          rtb_Sum2_m = INS_P.Saturation_LowerSat_n;
        }
      }

      /* End of Saturate: '<S252>/Saturation' */
      rtb_Gauss_to_uT[0] = INS_PARAM.EXTPOS_POS_GAIN * rtb_Sum2_m;
      rtb_Gauss_to_uT[1] = -INS_PARAM.EXTPOS_VEL_GAIN * rtb_Sum2_m;
      rtb_Gauss_to_uT[2] = INS_PARAM.EXTPOS_BIAS_A_GAIN * rtb_Sum2_m;
    } else {
      rtb_Gauss_to_uT[0] = INS_DWork.Delay_DSTATE_p[0];
      rtb_Gauss_to_uT[1] = INS_DWork.Delay_DSTATE_p[1];
      rtb_Gauss_to_uT[2] = INS_DWork.Delay_DSTATE_p[2];
    }

    /* End of Switch: '<S251>/Switch' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/ExternalPos_Process' */
    /* Update for UnitDelay: '<S250>/Delay Input1' incorporates:
     *  Inport: '<Root>/External_Pos'
     *  SignalConversion: '<S367>/TmpSignal ConversionAtSignal CopyInport1'
     */
    INS_DWork.DelayInput1_DSTATE_a = INS_U.External_Pos.timestamp;

    /* End of Outputs for SubSystem: '<S3>/ExternalPos_Process' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Sum: '<S249>/Sum1' incorporates:
     *  Gain: '<S251>/Gain'
     */
    INS_B.Sum1_c[0] = INS_P.Gain_Gain_ov * rtb_Gauss_to_uT[0] +
      rtb_MathFunction[0];

    /* Update for Delay: '<S251>/Delay' incorporates:
     *  Gain: '<S251>/Gain'
     */
    INS_DWork.Delay_DSTATE_p[0] = rtb_Gauss_to_uT[0];

    /* Sum: '<S249>/Sum1' incorporates:
     *  Gain: '<S251>/Gain'
     */
    INS_B.Sum1_c[1] = INS_P.Gain_Gain_ov * rtb_Gauss_to_uT[1] +
      rtb_MathFunction[1];

    /* Update for Delay: '<S251>/Delay' incorporates:
     *  Gain: '<S251>/Gain'
     */
    INS_DWork.Delay_DSTATE_p[1] = rtb_Gauss_to_uT[1];

    /* Sum: '<S249>/Sum1' incorporates:
     *  Gain: '<S251>/Gain'
     */
    INS_B.Sum1_c[2] = INS_P.Gain_Gain_ov * rtb_Gauss_to_uT[2] +
      rtb_DiscreteTimeIntegrator_eh;

    /* Update for Delay: '<S251>/Delay' incorporates:
     *  Gain: '<S251>/Gain'
     */
    INS_DWork.Delay_DSTATE_p[2] = rtb_Gauss_to_uT[2];

    /* Update for Delay: '<S253>/x_delay' */
    INS_DWork.icLoad_p = 0U;
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 24;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.x_delay_DSTATE[rtb_Saturation1_j_idx_0] =
        INS_DWork.x_delay_DSTATE[rtb_Saturation1_j_idx_0 + 1];
    }

    INS_DWork.x_delay_DSTATE[24] = rtb_MathFunction[0];

    /* End of Update for Delay: '<S253>/x_delay' */

    /* Update for UnitDelay: '<S257>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_a4 = true;

    /* Update for Delay: '<S255>/Delay' */
    INS_DWork.Delay_DSTATE_m = rtb_Gain2_a;
    rtb_MathFunction[0] = INS_B.Sum1_c[0];
    rtb_MathFunction[1] = INS_B.Sum1_c[1];
    rtb_DiscreteTimeIntegrator_eh = INS_B.Sum1_c[2];
  } else {
    if (INS_DWork.ExternalPos_Correct_MODE) {
      INS_DWork.ExternalPos_Correct_MODE = false;
    }
  }

  /* End of Switch: '<S237>/Switch' */
  /* End of Outputs for SubSystem: '<S237>/ExternalPos_Correct' */

  /* Outputs for Enabled SubSystem: '<S230>/GPS_Vel_Init' incorporates:
   *  EnablePort: '<S232>/Enable'
   */
  /* Outputs for Enabled SubSystem: '<S229>/GPS_Pos_Init' incorporates:
   *  EnablePort: '<S231>/Enable'
   */
  /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
  /* SignalConversion: '<S315>/TmpSignal ConversionAtSignal CopyInport1' */
  if (rtb_Compare_cio) {
    /* DataTypeConversion: '<S231>/Data Type Conversion' incorporates:
     *  Product: '<S231>/Multiply'
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy3Inport1'
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy4Inport1'
     *  Sum: '<S231>/Sum'
     */
    INS_B.DataTypeConversion_n[0] = (real32_T)((rtb_Scalefactor1 -
      rtb_Switch4_c_idx_0) * rtb_DataTypeConversion1);
    INS_B.DataTypeConversion_n[1] = (real32_T)((rtb_Scalefactor2 -
      rtb_Switch4_c_idx_1) * rtb_DataTypeConversion2);

    /* Reshape: '<S232>/Reshape' incorporates:
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy6Inport1'
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy7Inport1'
     */
    INS_B.Merge_n[0] = rtb_Divide1;
    INS_B.Merge_n[1] = rtb_Sum2_by;
  }

  /* End of Outputs for SubSystem: '<S229>/GPS_Pos_Init' */
  /* End of Outputs for SubSystem: '<S230>/GPS_Vel_Init' */

  /* Outputs for Enabled SubSystem: '<S230>/OptFlow_Vel_Init' incorporates:
   *  EnablePort: '<S233>/Enable'
   */
  /* SignalConversion: '<S316>/TmpSignal ConversionAtSignal CopyInport1' */
  if (rtb_Compare_ai) {
    /* Reshape: '<S233>/Reshape' */
    INS_B.Merge_n[0] = rtb_VectorConcatenate[0];
    INS_B.Merge_n[1] = rtb_VectorConcatenate[1];
  }

  /* End of Outputs for SubSystem: '<S230>/OptFlow_Vel_Init' */
  /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

  /* Switch: '<S226>/Switch' incorporates:
   *  Constant: '<S228>/Constant'
   *  Delay: '<S226>/Delay'
   */
  if (rtb_FixPtRelationalOperator_p) {
    rtb_Switch_ot0[0] = INS_B.DataTypeConversion_n[0];
    rtb_Switch_ot0[2] = INS_B.Merge_n[0];
    rtb_Switch_ot0[4] = INS_P.Constant_Value_b[0];
    rtb_Switch_ot0[1] = INS_B.DataTypeConversion_n[1];
    rtb_Switch_ot0[3] = INS_B.Merge_n[1];
    rtb_Switch_ot0[5] = INS_P.Constant_Value_b[1];
  } else {
    rtb_Switch_ot0[0] = INS_DWork.Delay_DSTATE_l[0];
    rtb_Switch_ot0[2] = INS_DWork.Delay_DSTATE_l[2];
    rtb_Switch_ot0[4] = INS_DWork.Delay_DSTATE_l[4];
    rtb_Switch_ot0[1] = INS_DWork.Delay_DSTATE_l[1];
    rtb_Switch_ot0[3] = INS_DWork.Delay_DSTATE_l[3];
    rtb_Switch_ot0[5] = INS_DWork.Delay_DSTATE_l[5];
  }

  /* End of Switch: '<S226>/Switch' */

  /* Product: '<S227>/Multiply' incorporates:
   *  SignalConversion: '<S59>/BusConversion_InsertedFor_Rotation_Data_at_inport_0'
   *  SignalConversion: '<S59>/TmpSignal ConversionAtSignal ConversionInport1'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
    /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
    rtb_Gain_ok[rtb_Saturation1_j_idx_1_0] =
      rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0 + 6] *
      rtb_VectorConcatenate1[2] +
      (rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0 + 3] *
       rtb_VectorConcatenate1[1] +
       rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_1_0] *
       rtb_VectorConcatenate1[0]);

    /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
    /* End of Outputs for SubSystem: '<S55>/AHRS' */
  }

  /* Gain: '<S227>/Gain' incorporates:
   *  Constant: '<S227>/Constant'
   *  Product: '<S227>/Multiply'
   *  Sum: '<S227>/Add'
   */
  tmp[0] = INS_P.Gain_Gain_ic * rtb_Switch_ot0[2];
  tmp[2] = (rtb_Gain_ok[0] - rtb_Switch_ot0[4]) * INS_P.Gain_Gain_ic;
  tmp[4] = INS_P.Gain_Gain_ic * INS_P.Constant_Value_l[0];
  tmp[1] = INS_P.Gain_Gain_ic * rtb_Switch_ot0[3];
  tmp[3] = (rtb_Gain_ok[1] - rtb_Switch_ot0[5]) * INS_P.Gain_Gain_ic;
  tmp[5] = INS_P.Gain_Gain_ic * INS_P.Constant_Value_l[1];

  /* Sum: '<S227>/Sum' */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 6;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_Sum_g0[rtb_Saturation1_j_idx_1_0] =
      rtb_Switch_ot0[rtb_Saturation1_j_idx_1_0] + tmp[rtb_Saturation1_j_idx_1_0];
  }

  /* End of Sum: '<S227>/Sum' */

  /* Outputs for Enabled SubSystem: '<S200>/OptFlow_Correct' incorporates:
   *  EnablePort: '<S220>/Enable'
   */
  if (rtb_LogicalOperator5) {
    if (!INS_DWork.OptFlow_Correct_MODE) {
      /* InitializeConditions for UnitDelay: '<S221>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_m = INS_P.DetectChange_vinit_l;

      /* InitializeConditions for Delay: '<S224>/vn_delay' */
      INS_DWork.icLoad_h = 1U;

      /* InitializeConditions for Delay: '<S224>/ve_delay' */
      INS_DWork.icLoad_j = 1U;

      /* InitializeConditions for Memory: '<S222>/Memory' */
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.Memory_PreviousInput_n[rtb_Saturation1_j_idx_0] =
          INS_P.Memory_InitialCondition_i;
      }

      /* End of InitializeConditions for Memory: '<S222>/Memory' */
      INS_DWork.OptFlow_Correct_MODE = true;
    }

    /* Delay: '<S224>/vn_delay' */
    if (rtb_FixPtRelationalOperator_p && (INS_PrevZCSigState.vn_delay_Reset_ZCE
         != POS_ZCSIG)) {
      INS_DWork.icLoad_h = 1U;
    }

    INS_PrevZCSigState.vn_delay_Reset_ZCE = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_h != 0) {
      INS_DWork.vn_delay_DSTATE[0] = rtb_Sum_g0[2];
      INS_DWork.vn_delay_DSTATE[1] = rtb_Sum_g0[2];
      INS_DWork.vn_delay_DSTATE[2] = rtb_Sum_g0[2];
    }

    /* Delay: '<S224>/ve_delay' */
    if (rtb_FixPtRelationalOperator_p && (INS_PrevZCSigState.ve_delay_Reset_ZCE
         != POS_ZCSIG)) {
      INS_DWork.icLoad_j = 1U;
    }

    INS_PrevZCSigState.ve_delay_Reset_ZCE = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_j != 0) {
      INS_DWork.ve_delay_DSTATE[0] = rtb_Sum_g0[3];
      INS_DWork.ve_delay_DSTATE[1] = rtb_Sum_g0[3];
      INS_DWork.ve_delay_DSTATE[2] = rtb_Sum_g0[3];
    }

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/OpticalFlow_PreProcess' */
    /* Switch: '<S222>/Switch' incorporates:
     *  Constant: '<S223>/Constant'
     *  Gain: '<S223>/Gain'
     *  Gain: '<S223>/Gain2'
     *  Inport: '<Root>/Optical_Flow'
     *  Memory: '<S222>/Memory'
     *  RelationalOperator: '<S221>/FixPt Relational Operator'
     *  SignalConversion: '<S371>/BusConversion_InsertedFor_OpticalFlow_Data_at_inport_0'
     *  UnitDelay: '<S221>/Delay Input1'
     */
    if (INS_U.Optical_Flow.timestamp != INS_DWork.DelayInput1_DSTATE_m) {
      /* Sum: '<S220>/Sum' incorporates:
       *  Delay: '<S224>/ve_delay'
       *  Delay: '<S224>/vn_delay'
       */
      rtb_Memory_m_idx_0 = rtb_VectorConcatenate[0] - INS_DWork.vn_delay_DSTATE
        [0U];
      rtb_Memory_m_idx_1 = rtb_VectorConcatenate[1] - INS_DWork.ve_delay_DSTATE
        [0U];
      rtb_Switch_ot0[0] = INS_P.Constant_Value_o[0];
      rtb_Switch_ot0[2] = INS_PARAM.OPF_VEL_GAIN * rtb_Memory_m_idx_0;
      rtb_Switch_ot0[4] = -INS_PARAM.OPF_BIAS_A_GAIN * rtb_Memory_m_idx_0;
      rtb_Switch_ot0[1] = INS_P.Constant_Value_o[1];
      rtb_Switch_ot0[3] = INS_PARAM.OPF_VEL_GAIN * rtb_Memory_m_idx_1;
      rtb_Switch_ot0[5] = -INS_PARAM.OPF_BIAS_A_GAIN * rtb_Memory_m_idx_1;
    } else {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
           rtb_Saturation1_j_idx_0++) {
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0] =
          INS_DWork.Memory_PreviousInput_n[rtb_Saturation1_j_idx_0];
      }
    }

    /* End of Switch: '<S222>/Switch' */

    /* Update for UnitDelay: '<S221>/Delay Input1' incorporates:
     *  Inport: '<Root>/Optical_Flow'
     *  SignalConversion: '<S371>/BusConversion_InsertedFor_OpticalFlow_Data_at_inport_0'
     */
    INS_DWork.DelayInput1_DSTATE_m = INS_U.Optical_Flow.timestamp;

    /* End of Outputs for SubSystem: '<S3>/OpticalFlow_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Update for Delay: '<S224>/vn_delay' */
    INS_DWork.icLoad_h = 0U;
    INS_DWork.vn_delay_DSTATE[0] = INS_DWork.vn_delay_DSTATE[1];
    INS_DWork.vn_delay_DSTATE[1] = INS_DWork.vn_delay_DSTATE[2];
    INS_DWork.vn_delay_DSTATE[2] = rtb_Sum_g0[2];

    /* Update for Delay: '<S224>/ve_delay' */
    INS_DWork.icLoad_j = 0U;
    INS_DWork.ve_delay_DSTATE[0] = INS_DWork.ve_delay_DSTATE[1];
    INS_DWork.ve_delay_DSTATE[1] = INS_DWork.ve_delay_DSTATE[2];
    INS_DWork.ve_delay_DSTATE[2] = rtb_Sum_g0[3];
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
         rtb_Saturation1_j_idx_0++) {
      /* Sum: '<S220>/Sum1' incorporates:
       *  Gain: '<S222>/Gain3'
       */
      INS_B.Sum1_f[rtb_Saturation1_j_idx_0] = INS_P.Gain3_Gain_p *
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0] +
        rtb_Sum_g0[rtb_Saturation1_j_idx_0];

      /* Update for Memory: '<S222>/Memory' incorporates:
       *  Gain: '<S222>/Gain3'
       */
      INS_DWork.Memory_PreviousInput_n[rtb_Saturation1_j_idx_0] =
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0];
    }
  } else {
    if (INS_DWork.OptFlow_Correct_MODE) {
      INS_DWork.OptFlow_Correct_MODE = false;
    }
  }

  /* End of Outputs for SubSystem: '<S200>/OptFlow_Correct' */

  /* Switch: '<S200>/Switch' */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 6;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_Sum2_m = rtb_Sum_g0[rtb_Saturation1_j_idx_1_0];
    if (rtb_LogicalOperator5) {
      rtb_Sum2_m = INS_B.Sum1_f[rtb_Saturation1_j_idx_1_0];
    }

    rtb_Sum_g0[rtb_Saturation1_j_idx_1_0] = rtb_Sum2_m;
  }

  /* End of Switch: '<S200>/Switch' */

  /* Outputs for Enabled SubSystem: '<S199>/GPS_Correct' incorporates:
   *  EnablePort: '<S210>/Enable'
   */
  if (rtb_LogicalOperator2_g) {
    if (!INS_DWork.GPS_Correct_MODE_o) {
      /* InitializeConditions for UnitDelay: '<S211>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_d0 = INS_P.DetectChange_vinit_i;

      /* InitializeConditions for Delay: '<S214>/x_delay' */
      INS_DWork.icLoad_op = 1U;

      /* InitializeConditions for Delay: '<S214>/x_delay1' */
      INS_DWork.icLoad_i = 1U;

      /* InitializeConditions for Delay: '<S214>/vn_delay' */
      INS_DWork.icLoad_m = 1U;

      /* InitializeConditions for Delay: '<S214>/vn_delay1' */
      INS_DWork.icLoad_jp = 1U;

      /* InitializeConditions for UnitDelay: '<S219>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_gn = INS_P.DetectIncrease_vinit_p;

      /* InitializeConditions for Memory: '<S217>/Memory' */
      INS_DWork.Memory_PreviousInput_d[0] = INS_P.Memory_InitialCondition_l[0];
      INS_DWork.Memory_PreviousInput_d[1] = INS_P.Memory_InitialCondition_l[1];

      /* InitializeConditions for Memory: '<S212>/Memory' */
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.Memory_PreviousInput_h[rtb_Saturation1_j_idx_0] =
          INS_P.Memory_InitialCondition_o;
      }

      /* End of InitializeConditions for Memory: '<S212>/Memory' */
      INS_DWork.GPS_Correct_MODE_o = true;
    }

    /* Delay: '<S214>/x_delay' */
    if (rtb_FixPtRelationalOperator_p && (INS_PrevZCSigState.x_delay_Reset_ZCE_b
         != POS_ZCSIG)) {
      INS_DWork.icLoad_op = 1U;
    }

    INS_PrevZCSigState.x_delay_Reset_ZCE_b = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_op != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 75;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.x_delay_DSTATE_k[rtb_Saturation1_j_idx_0] = rtb_Sum_g0[0];
      }
    }

    /* Delay: '<S214>/x_delay1' */
    if (rtb_FixPtRelationalOperator_p && (INS_PrevZCSigState.x_delay1_Reset_ZCE
         != POS_ZCSIG)) {
      INS_DWork.icLoad_i = 1U;
    }

    INS_PrevZCSigState.x_delay1_Reset_ZCE = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_i != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 75;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.x_delay1_DSTATE[rtb_Saturation1_j_idx_0] = rtb_Sum_g0[1];
      }
    }

    /* Delay: '<S214>/vn_delay' */
    if (rtb_FixPtRelationalOperator_p &&
        (INS_PrevZCSigState.vn_delay_Reset_ZCE_p != POS_ZCSIG)) {
      INS_DWork.icLoad_m = 1U;
    }

    INS_PrevZCSigState.vn_delay_Reset_ZCE_p = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_m != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 50;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.vn_delay_DSTATE_n[rtb_Saturation1_j_idx_0] = rtb_Sum_g0[2];
      }
    }

    /* Delay: '<S214>/vn_delay1' */
    if (rtb_FixPtRelationalOperator_p && (INS_PrevZCSigState.vn_delay1_Reset_ZCE
         != POS_ZCSIG)) {
      INS_DWork.icLoad_jp = 1U;
    }

    INS_PrevZCSigState.vn_delay1_Reset_ZCE = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_jp != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 50;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.vn_delay1_DSTATE[rtb_Saturation1_j_idx_0] = rtb_Sum_g0[3];
      }
    }

    /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
    /* DataTypeConversion: '<S215>/Data Type Conversion' incorporates:
     *  Product: '<S215>/Multiply'
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy3Inport1'
     *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy4Inport1'
     *  Sum: '<S215>/Sum'
     */
    rtb_Memory_m_idx_0 = (real32_T)((rtb_Scalefactor1 - rtb_Switch4_c_idx_0) *
      rtb_DataTypeConversion1);
    rtb_Memory_m_idx_1 = (real32_T)((rtb_Scalefactor2 - rtb_Switch4_c_idx_1) *
      rtb_DataTypeConversion2);

    /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

    /* RelationalOperator: '<S219>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S219>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (1 > (int32_T)INS_DWork.DelayInput1_DSTATE_gn);

    /* Switch: '<S217>/Switch' incorporates:
     *  DataTypeConversion: '<S215>/Data Type Conversion'
     *  Memory: '<S217>/Memory'
     *  Sum: '<S218>/Sum'
     */
    if (rtb_WGS84_pos_valid) {
      rtb_DiscreteTimeIntegrator_g = rtb_Sum_g0[0] - rtb_Memory_m_idx_0;
      rtb_dec_rad = rtb_Sum_g0[1] - rtb_Memory_m_idx_1;
    } else {
      rtb_DiscreteTimeIntegrator_g = INS_DWork.Memory_PreviousInput_d[0];
      rtb_dec_rad = INS_DWork.Memory_PreviousInput_d[1];
    }

    /* End of Switch: '<S217>/Switch' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/GPS_PreProcess' */
    /* Logic: '<S210>/Logical Operator' incorporates:
     *  Inport: '<Root>/GPS_uBlox'
     *  RelationalOperator: '<S211>/FixPt Relational Operator'
     *  SignalConversion: '<S368>/BusConversion_InsertedFor_GPS_Data_at_inport_0'
     *  UnitDelay: '<S211>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (rtb_WGS84_pos_valid || (INS_U.GPS_uBlox.timestamp !=
      INS_DWork.DelayInput1_DSTATE_d0));

    /* End of Outputs for SubSystem: '<S3>/GPS_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Switch: '<S212>/Switch' incorporates:
     *  DataTypeConversion: '<S215>/Data Type Conversion'
     *  Delay: '<S214>/x_delay'
     *  Delay: '<S214>/x_delay1'
     *  Gain: '<S213>/Gain'
     *  Gain: '<S213>/Gain2'
     *  Gain: '<S213>/Gain3'
     *  Memory: '<S212>/Memory'
     *  Sum: '<S210>/Sum'
     *  Sum: '<S216>/Sum1'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      /* Sum: '<S210>/Sum' incorporates:
       *  Delay: '<S214>/vn_delay'
       *  Delay: '<S214>/vn_delay1'
       *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy6Inport1'
       *  SignalConversion: '<S309>/TmpSignal ConversionAtSignal Copy7Inport1'
       */
      rtb_MathFunction_e_idx_2 = rtb_Divide1 - INS_DWork.vn_delay_DSTATE_n[0U];
      rtb_Multiply2 = rtb_Sum2_by - INS_DWork.vn_delay1_DSTATE[0U];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
      rtb_Switch_ot0[0] = ((rtb_Memory_m_idx_0 + rtb_DiscreteTimeIntegrator_g) -
                           INS_DWork.x_delay_DSTATE_k[0U]) *
        INS_PARAM.GPS_POS_GAIN;
      rtb_Switch_ot0[2] = INS_PARAM.GPS_VEL_GAIN * rtb_MathFunction_e_idx_2;
      rtb_Switch_ot0[4] = -INS_PARAM.GPS_BIAS_A_GAIN * rtb_MathFunction_e_idx_2;
      rtb_Switch_ot0[1] = ((rtb_Memory_m_idx_1 + rtb_dec_rad) -
                           INS_DWork.x_delay1_DSTATE[0U]) *
        INS_PARAM.GPS_POS_GAIN;
      rtb_Switch_ot0[3] = INS_PARAM.GPS_VEL_GAIN * rtb_Multiply2;
      rtb_Switch_ot0[5] = -INS_PARAM.GPS_BIAS_A_GAIN * rtb_Multiply2;
    } else {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
           rtb_Saturation1_j_idx_0++) {
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0] =
          INS_DWork.Memory_PreviousInput_h[rtb_Saturation1_j_idx_0];
      }
    }

    /* End of Switch: '<S212>/Switch' */

    /* Sum: '<S210>/Sum1' incorporates:
     *  Gain: '<S212>/Gain3'
     */
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
         rtb_Saturation1_j_idx_0++) {
      INS_B.Sum1_o[rtb_Saturation1_j_idx_0] = INS_P.Gain3_Gain_o *
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0] +
        rtb_Sum_g0[rtb_Saturation1_j_idx_0];
    }

    /* End of Sum: '<S210>/Sum1' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/GPS_PreProcess' */
    /* Update for UnitDelay: '<S211>/Delay Input1' incorporates:
     *  Inport: '<Root>/GPS_uBlox'
     *  SignalConversion: '<S368>/BusConversion_InsertedFor_GPS_Data_at_inport_0'
     */
    INS_DWork.DelayInput1_DSTATE_d0 = INS_U.GPS_uBlox.timestamp;

    /* End of Outputs for SubSystem: '<S3>/GPS_PreProcess' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Update for Delay: '<S214>/x_delay' */
    INS_DWork.icLoad_op = 0U;
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 74;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.x_delay_DSTATE_k[rtb_Saturation1_j_idx_0] =
        INS_DWork.x_delay_DSTATE_k[rtb_Saturation1_j_idx_0 + 1];

      /* Update for Delay: '<S214>/x_delay1' */
      INS_DWork.x_delay1_DSTATE[rtb_Saturation1_j_idx_0] =
        INS_DWork.x_delay1_DSTATE[rtb_Saturation1_j_idx_0 + 1];
    }

    INS_DWork.x_delay_DSTATE_k[74] = rtb_Sum_g0[0];

    /* End of Update for Delay: '<S214>/x_delay' */

    /* Update for Delay: '<S214>/x_delay1' */
    INS_DWork.icLoad_i = 0U;
    INS_DWork.x_delay1_DSTATE[74] = rtb_Sum_g0[1];

    /* Update for Delay: '<S214>/vn_delay' */
    INS_DWork.icLoad_m = 0U;
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 49;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.vn_delay_DSTATE_n[rtb_Saturation1_j_idx_0] =
        INS_DWork.vn_delay_DSTATE_n[rtb_Saturation1_j_idx_0 + 1];

      /* Update for Delay: '<S214>/vn_delay1' */
      INS_DWork.vn_delay1_DSTATE[rtb_Saturation1_j_idx_0] =
        INS_DWork.vn_delay1_DSTATE[rtb_Saturation1_j_idx_0 + 1];
    }

    INS_DWork.vn_delay_DSTATE_n[49] = rtb_Sum_g0[2];

    /* End of Update for Delay: '<S214>/vn_delay' */

    /* Update for Delay: '<S214>/vn_delay1' */
    INS_DWork.icLoad_jp = 0U;
    INS_DWork.vn_delay1_DSTATE[49] = rtb_Sum_g0[3];

    /* Update for UnitDelay: '<S219>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_gn = true;

    /* Update for Memory: '<S217>/Memory' */
    INS_DWork.Memory_PreviousInput_d[0] = rtb_DiscreteTimeIntegrator_g;
    INS_DWork.Memory_PreviousInput_d[1] = rtb_dec_rad;

    /* Update for Memory: '<S212>/Memory' */
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.Memory_PreviousInput_h[rtb_Saturation1_j_idx_0] =
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0];
    }

    /* End of Update for Memory: '<S212>/Memory' */
  } else {
    if (INS_DWork.GPS_Correct_MODE_o) {
      INS_DWork.GPS_Correct_MODE_o = false;
    }
  }

  /* End of Outputs for SubSystem: '<S199>/GPS_Correct' */

  /* Switch: '<S199>/Switch' */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 6;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_Sum2_m = rtb_Sum_g0[rtb_Saturation1_j_idx_1_0];
    if (rtb_LogicalOperator2_g) {
      rtb_Sum2_m = INS_B.Sum1_o[rtb_Saturation1_j_idx_1_0];
    }

    rtb_Sum_g0[rtb_Saturation1_j_idx_1_0] = rtb_Sum2_m;
  }

  /* End of Switch: '<S199>/Switch' */

  /* Outputs for Enabled SubSystem: '<S198>/ExternalPos_Correct' incorporates:
   *  EnablePort: '<S201>/Enable'
   */
  if (rtb_Compare_o) {
    if (!INS_DWork.ExternalPos_Correct_MODE_k) {
      /* InitializeConditions for UnitDelay: '<S202>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_no = INS_P.DetectChange_vinit;

      /* InitializeConditions for Delay: '<S205>/x_delay' */
      INS_DWork.icLoad_hw = 1U;

      /* InitializeConditions for Delay: '<S205>/x_delay1' */
      INS_DWork.icLoad_od = 1U;

      /* InitializeConditions for UnitDelay: '<S209>/Delay Input1' */
      INS_DWork.DelayInput1_DSTATE_dp5 = INS_P.DetectIncrease_vinit_m;

      /* InitializeConditions for Delay: '<S207>/Delay' */
      INS_DWork.Delay_DSTATE_k[0] = INS_P.Delay_InitialCondition_e;
      INS_DWork.Delay_DSTATE_k[1] = INS_P.Delay_InitialCondition_e;

      /* InitializeConditions for Memory: '<S203>/Memory' */
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.Memory_PreviousInput_m[rtb_Saturation1_j_idx_0] =
          INS_P.Memory_InitialCondition;
      }

      /* End of InitializeConditions for Memory: '<S203>/Memory' */
      INS_DWork.ExternalPos_Correct_MODE_k = true;
    }

    /* Delay: '<S205>/x_delay' */
    if (rtb_FixPtRelationalOperator_p &&
        (INS_PrevZCSigState.x_delay_Reset_ZCE_lr != POS_ZCSIG)) {
      INS_DWork.icLoad_hw = 1U;
    }

    INS_PrevZCSigState.x_delay_Reset_ZCE_lr = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_hw != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 25;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.x_delay_DSTATE_l[rtb_Saturation1_j_idx_0] = rtb_Sum_g0[0];
      }
    }

    /* Delay: '<S205>/x_delay1' */
    if (rtb_FixPtRelationalOperator_p &&
        (INS_PrevZCSigState.x_delay1_Reset_ZCE_b != POS_ZCSIG)) {
      INS_DWork.icLoad_od = 1U;
    }

    INS_PrevZCSigState.x_delay1_Reset_ZCE_b = rtb_FixPtRelationalOperator_p;
    if (INS_DWork.icLoad_od != 0) {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 25;
           rtb_Saturation1_j_idx_0++) {
        INS_DWork.x_delay1_DSTATE_m[rtb_Saturation1_j_idx_0] = rtb_Sum_g0[1];
      }
    }

    /* RelationalOperator: '<S209>/FixPt Relational Operator' incorporates:
     *  UnitDelay: '<S209>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (1 > (int32_T)INS_DWork.DelayInput1_DSTATE_dp5);

    /* Switch: '<S207>/Switch' incorporates:
     *  Delay: '<S207>/Delay'
     *  SignalConversion: '<S308>/TmpSignal ConversionAtSignal Copy1Inport1'
     *  SignalConversion: '<S308>/TmpSignal ConversionAtSignal Copy2Inport1'
     *  Sum: '<S208>/Sum'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      rtb_Memory_m_idx_0 = rtb_Sum_g0[0] - rtb_Multiply_hs[0];
      rtb_Memory_m_idx_1 = rtb_Sum_g0[1] - rtb_Multiply_hs[1];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
    } else {
      rtb_Memory_m_idx_0 = INS_DWork.Delay_DSTATE_k[0];
      rtb_Memory_m_idx_1 = INS_DWork.Delay_DSTATE_k[1];
    }

    /* End of Switch: '<S207>/Switch' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/ExternalPos_Process' */
    /* Logic: '<S201>/Logical Operator' incorporates:
     *  Inport: '<Root>/External_Pos'
     *  RelationalOperator: '<S202>/FixPt Relational Operator'
     *  SignalConversion: '<S367>/TmpSignal ConversionAtSignal CopyInport1'
     *  UnitDelay: '<S202>/Delay Input1'
     */
    rtb_WGS84_pos_valid = (rtb_WGS84_pos_valid || (INS_U.External_Pos.timestamp
      != INS_DWork.DelayInput1_DSTATE_no));

    /* End of Outputs for SubSystem: '<S3>/ExternalPos_Process' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Switch: '<S203>/Switch' incorporates:
     *  Gain: '<S204>/Gain'
     *  Gain: '<S204>/Gain2'
     *  Gain: '<S204>/Gain3'
     *  Memory: '<S203>/Memory'
     */
    if (rtb_WGS84_pos_valid) {
      /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
      /* Sum: '<S201>/Sum' incorporates:
       *  Delay: '<S205>/x_delay'
       *  Delay: '<S205>/x_delay1'
       *  SignalConversion: '<S308>/TmpSignal ConversionAtSignal Copy1Inport1'
       *  SignalConversion: '<S308>/TmpSignal ConversionAtSignal Copy2Inport1'
       *  Sum: '<S206>/Sum1'
       */
      rtb_DiscreteTimeIntegrator_g = (rtb_Multiply_hs[0] + rtb_Memory_m_idx_0) -
        INS_DWork.x_delay_DSTATE_l[0U];
      rtb_dec_rad = (rtb_Multiply_hs[1] + rtb_Memory_m_idx_1) -
        INS_DWork.x_delay1_DSTATE_m[0U];

      /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */
      rtb_Switch_ot0[0] = INS_PARAM.EXTPOS_POS_GAIN *
        rtb_DiscreteTimeIntegrator_g;
      rtb_Switch_ot0[2] = INS_PARAM.EXTPOS_VEL_GAIN *
        rtb_DiscreteTimeIntegrator_g;
      rtb_Switch_ot0[4] = -INS_PARAM.EXTPOS_BIAS_A_GAIN *
        rtb_DiscreteTimeIntegrator_g;
      rtb_Switch_ot0[1] = INS_PARAM.EXTPOS_POS_GAIN * rtb_dec_rad;
      rtb_Switch_ot0[3] = INS_PARAM.EXTPOS_VEL_GAIN * rtb_dec_rad;
      rtb_Switch_ot0[5] = -INS_PARAM.EXTPOS_BIAS_A_GAIN * rtb_dec_rad;
    } else {
      for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
           rtb_Saturation1_j_idx_0++) {
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0] =
          INS_DWork.Memory_PreviousInput_m[rtb_Saturation1_j_idx_0];
      }
    }

    /* End of Switch: '<S203>/Switch' */

    /* Sum: '<S201>/Sum1' incorporates:
     *  Gain: '<S203>/Gain3'
     */
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
         rtb_Saturation1_j_idx_0++) {
      INS_B.Sum1_b[rtb_Saturation1_j_idx_0] = INS_P.Gain3_Gain_ev *
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0] +
        rtb_Sum_g0[rtb_Saturation1_j_idx_0];
    }

    /* End of Sum: '<S201>/Sum1' */

    /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* Outputs for Atomic SubSystem: '<S3>/ExternalPos_Process' */
    /* Update for UnitDelay: '<S202>/Delay Input1' incorporates:
     *  Inport: '<Root>/External_Pos'
     *  SignalConversion: '<S367>/TmpSignal ConversionAtSignal CopyInport1'
     */
    INS_DWork.DelayInput1_DSTATE_no = INS_U.External_Pos.timestamp;

    /* End of Outputs for SubSystem: '<S3>/ExternalPos_Process' */
    /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

    /* Update for Delay: '<S205>/x_delay' */
    INS_DWork.icLoad_hw = 0U;
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 24;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.x_delay_DSTATE_l[rtb_Saturation1_j_idx_0] =
        INS_DWork.x_delay_DSTATE_l[rtb_Saturation1_j_idx_0 + 1];

      /* Update for Delay: '<S205>/x_delay1' */
      INS_DWork.x_delay1_DSTATE_m[rtb_Saturation1_j_idx_0] =
        INS_DWork.x_delay1_DSTATE_m[rtb_Saturation1_j_idx_0 + 1];
    }

    INS_DWork.x_delay_DSTATE_l[24] = rtb_Sum_g0[0];

    /* End of Update for Delay: '<S205>/x_delay' */

    /* Update for Delay: '<S205>/x_delay1' */
    INS_DWork.icLoad_od = 0U;
    INS_DWork.x_delay1_DSTATE_m[24] = rtb_Sum_g0[1];

    /* Update for UnitDelay: '<S209>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_dp5 = true;

    /* Update for Delay: '<S207>/Delay' */
    INS_DWork.Delay_DSTATE_k[0] = rtb_Memory_m_idx_0;
    INS_DWork.Delay_DSTATE_k[1] = rtb_Memory_m_idx_1;

    /* Update for Memory: '<S203>/Memory' */
    for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
         rtb_Saturation1_j_idx_0++) {
      INS_DWork.Memory_PreviousInput_m[rtb_Saturation1_j_idx_0] =
        rtb_Switch_ot0[rtb_Saturation1_j_idx_0];
    }

    /* End of Update for Memory: '<S203>/Memory' */
  } else {
    if (INS_DWork.ExternalPos_Correct_MODE_k) {
      INS_DWork.ExternalPos_Correct_MODE_k = false;
    }
  }

  /* End of Outputs for SubSystem: '<S198>/ExternalPos_Correct' */

  /* Switch: '<S198>/Switch' */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 6;
       rtb_Saturation1_j_idx_1_0++) {
    rtb_Sum2_m = rtb_Sum_g0[rtb_Saturation1_j_idx_1_0];
    if (rtb_Compare_o) {
      rtb_Sum2_m = INS_B.Sum1_b[rtb_Saturation1_j_idx_1_0];
    }

    rtb_Sum_g0[rtb_Saturation1_j_idx_1_0] = rtb_Sum2_m;
  }

  /* End of Switch: '<S198>/Switch' */

  /* Signum: '<S195>/Sign' */
  if (rtb_DataTypeConversion1 < 0.0) {
    rtb_Scalefactor1 = -1.0;
  } else if (rtb_DataTypeConversion1 > 0.0) {
    rtb_Scalefactor1 = 1.0;
  } else {
    rtb_Scalefactor1 = rtb_DataTypeConversion1;
  }

  /* Switch: '<S195>/Switch' incorporates:
   *  Constant: '<S195>/Constant'
   */
  if (rtb_Scalefactor1 == 0.0) {
    rtb_Scalefactor1 = INS_P.Constant_Value;
  }

  /* Abs: '<S195>/Abs' incorporates:
   *  Signum: '<S195>/Sign'
   */
  rtb_Scalefactor2 = fabs(rtb_DataTypeConversion1);

  /* Saturate: '<S195>/Saturation' */
  if (rtb_Scalefactor2 > INS_P.Saturation_UpperSat) {
    rtb_Scalefactor2 = INS_P.Saturation_UpperSat;
  } else {
    if (rtb_Scalefactor2 < INS_P.Saturation_LowerSat) {
      rtb_Scalefactor2 = INS_P.Saturation_LowerSat;
    }
  }

  /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
  /* Outport: '<Root>/INS_Out' incorporates:
   *  DataTypeConversion: '<S192>/Data Type Conversion2'
   *  DataTypeConversion: '<S193>/Data Type Conversion'
   *  Product: '<S192>/Multiply'
   *  Product: '<S194>/Divide'
   *  Product: '<S195>/Product'
   *  SignalConversion: '<S315>/TmpSignal ConversionAtSignal CopyInport1'
   *  Sum: '<S193>/Sum'
   */
  INS_Y.INS_Out.lat = (rtb_Sum_g0[0] / (rtb_Scalefactor2 * rtb_Scalefactor1) +
                       rtb_Switch4_c_idx_0) * (real_T)rtb_Compare_cio;

  /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

  /* Signum: '<S195>/Sign' */
  if (rtb_DataTypeConversion2 < 0.0) {
    rtb_Scalefactor1 = -1.0;
  } else if (rtb_DataTypeConversion2 > 0.0) {
    rtb_Scalefactor1 = 1.0;
  } else {
    rtb_Scalefactor1 = rtb_DataTypeConversion2;
  }

  /* Switch: '<S195>/Switch' incorporates:
   *  Constant: '<S195>/Constant'
   */
  if (rtb_Scalefactor1 == 0.0) {
    rtb_Scalefactor1 = INS_P.Constant_Value;
  }

  /* Abs: '<S195>/Abs' incorporates:
   *  Signum: '<S195>/Sign'
   */
  rtb_Scalefactor2 = fabs(rtb_DataTypeConversion2);

  /* Saturate: '<S195>/Saturation' */
  if (rtb_Scalefactor2 > INS_P.Saturation_UpperSat) {
    rtb_Scalefactor2 = INS_P.Saturation_UpperSat;
  } else {
    if (rtb_Scalefactor2 < INS_P.Saturation_LowerSat) {
      rtb_Scalefactor2 = INS_P.Saturation_LowerSat;
    }
  }

  /* Outputs for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
  /* Outport: '<Root>/INS_Out' incorporates:
   *  DataTypeConversion: '<S192>/Data Type Conversion2'
   *  DataTypeConversion: '<S193>/Data Type Conversion'
   *  DataTypeConversion: '<S193>/Data Type Conversion1'
   *  Product: '<S192>/Multiply'
   *  Product: '<S194>/Divide'
   *  Product: '<S195>/Product'
   *  SignalConversion: '<S315>/TmpSignal ConversionAtSignal CopyInport1'
   *  Sum: '<S193>/Sum'
   */
  INS_Y.INS_Out.lon = (rtb_Sum_g0[1] / (rtb_Scalefactor2 * rtb_Scalefactor1) +
                       rtb_Switch4_c_idx_1) * (real_T)rtb_Compare_cio;
  INS_Y.INS_Out.alt = (rtb_MathFunction[0] + rtb_ff) * (real_T)rtb_Compare_cio;

  /* End of Outputs for SubSystem: '<S56>/TF_Data_PreProcess' */

  /* Update for Delay: '<S277>/Delay' */
  INS_DWork.Delay_DSTATE_b[0] = rtb_MathFunction[0];
  INS_DWork.Delay_DSTATE_b[1] = rtb_MathFunction[1];
  INS_DWork.Delay_DSTATE_b[2] = rtb_DiscreteTimeIntegrator_eh;

  /* Update for Delay: '<S226>/Delay' */
  for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 6;
       rtb_Saturation1_j_idx_0++) {
    INS_DWork.Delay_DSTATE_l[rtb_Saturation1_j_idx_0] =
      rtb_Sum_g0[rtb_Saturation1_j_idx_0];
  }

  /* End of Update for Delay: '<S226>/Delay' */
  /* End of Outputs for SubSystem: '<S56>/CF' */

  /* Update for Delay: '<S56>/Delay' */
  INS_DWork.Delay_4_DSTATE_k = rtb_Sum_g0[0];
  INS_DWork.Delay_5_DSTATE = rtb_Sum_g0[1];
  INS_DWork.Delay_6_DSTATE = rtb_MathFunction[0];

  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* Outputs for Atomic SubSystem: '<Root>/Bus_Constructor' */
  /* Outputs for Atomic SubSystem: '<S1>/Counter' */
  /* Outport: '<Root>/INS_Out' incorporates:
   *  UnitDelay: '<S4>/Output'
   */
  INS_Y.INS_Out.timestamp = INS_DWork.Output_DSTATE;

  /* Update for UnitDelay: '<S4>/Output' incorporates:
   *  Constant: '<S4>/Constant'
   *  Sum: '<S4>/Add'
   */
  INS_DWork.Output_DSTATE += INS_EXPORT.period;

  /* End of Outputs for SubSystem: '<S1>/Counter' */

  /* Outputs for Atomic SubSystem: '<S1>/Rotation_Output' */
  /* Sum: '<S5>/Sum' incorporates:
   *  Product: '<S5>/Multiply'
   *  SignalConversion: '<S59>/TmpSignal ConversionAtSignal ConversionInport1'
   *  SignalConversion: '<S5>/TmpSignal ConversionAtMultiplyInport2'
   */
  for (rtb_Saturation1_j_idx_1_0 = 0; rtb_Saturation1_j_idx_1_0 < 3;
       rtb_Saturation1_j_idx_1_0++) {
    /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
    /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
    /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
    rtb_Multiply_hs[rtb_Saturation1_j_idx_1_0] =
      rtb_VectorConcatenate1[rtb_Saturation1_j_idx_1_0] -
      ((rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 3] * rtb_Sum_g0[5] +
        rtb_M_OC[rtb_Saturation1_j_idx_1_0] * rtb_Sum_g0[4]) +
       rtb_M_OC[rtb_Saturation1_j_idx_1_0 + 6] * rtb_DiscreteTimeIntegrator_eh);

    /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
    /* End of Outputs for SubSystem: '<S55>/AHRS' */
    /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */
  }

  /* End of Sum: '<S5>/Sum' */
  /* End of Outputs for SubSystem: '<S1>/Rotation_Output' */

  /* Outputs for Atomic SubSystem: '<S1>/Status_Output' */
  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* RelationalOperator: '<S24>/Compare' incorporates:
   *  Constant: '<S24>/Constant'
   *  Logic: '<S9>/Logical Operator3'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_Compare_cio = ((rtb_Multiply_cb != 0) > (int32_T)
                     INS_P.CompareToConstant1_const_m);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* DiscreteIntegrator: '<S12>/Discrete-Time Integrator' */
  if (rtb_Compare_cio || (INS_DWork.DiscreteTimeIntegrator_PrevR_nf != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_bo = INS_P.DiscreteTimeIntegrator_IC;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_bo >=
      INS_P.DiscreteTimeIntegrator_UpperSat) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_bo =
      INS_P.DiscreteTimeIntegrator_UpperSat;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_bo <=
        INS_P.DiscreteTimeIntegrator_LowerSat) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_bo =
        INS_P.DiscreteTimeIntegrator_LowerSat;
    }
  }

  /* RelationalOperator: '<S39>/Compare' incorporates:
   *  Constant: '<S39>/Constant'
   */
  rtb_WGS84_pos_valid = ((int32_T)rtb_FixPtRelationalOperator_nc > (int32_T)
    INS_P.CompareToConstant1_const_j);

  /* DiscreteIntegrator: '<S15>/Discrete-Time Integrator' */
  if (rtb_WGS84_pos_valid || (INS_DWork.DiscreteTimeIntegrator_PrevRe_m != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hi =
      INS_P.DiscreteTimeIntegrator_IC_i;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_hi >=
      INS_P.DiscreteTimeIntegrator_UpperS_g) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hi =
      INS_P.DiscreteTimeIntegrator_UpperS_g;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_hi <=
        INS_P.DiscreteTimeIntegrator_LowerS_j) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_hi =
        INS_P.DiscreteTimeIntegrator_LowerS_j;
    }
  }

  /* Relay: '<S9>/Relay1' */
  if (rtb_MathFunction1 >= INS_P.Relay1_OnVal) {
    INS_DWork.Relay1_Mode_j = true;
  } else {
    if (rtb_MathFunction1 <= INS_P.Relay1_OffVal) {
      INS_DWork.Relay1_Mode_j = false;
    }
  }

  if (INS_DWork.Relay1_Mode_j) {
    rtb_LogicalOperator2_g = INS_P.Relay1_YOn_i;
  } else {
    rtb_LogicalOperator2_g = INS_P.Relay1_YOff_k;
  }

  /* End of Relay: '<S9>/Relay1' */

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* Logic: '<S9>/Logical Operator4' incorporates:
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_Compare_en = ((rtb_Multiply_cb != 0) || rtb_LogicalOperator2_g);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* RelationalOperator: '<S49>/Compare' incorporates:
   *  Constant: '<S49>/Constant'
   */
  rtb_FixPtRelationalOperator_p = ((int32_T)rtb_Compare_en > (int32_T)
    INS_P.CompareToConstant1_const_g);

  /* DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
  if (rtb_FixPtRelationalOperator_p ||
      (INS_DWork.DiscreteTimeIntegrator_PrevR_dj != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 =
      INS_P.DiscreteTimeIntegrator_IC_o;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 >=
      INS_P.DiscreteTimeIntegrator_UpperS_d) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 =
      INS_P.DiscreteTimeIntegrator_UpperS_d;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 <=
        INS_P.DiscreteTimeIntegrator_LowerS_n) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 =
        INS_P.DiscreteTimeIntegrator_LowerS_n;
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* RelationalOperator: '<S19>/Compare' incorporates:
   *  Constant: '<S19>/Constant'
   *  Logic: '<S9>/Logical Operator2'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_LogicalOperator2_g = ((rtb_Multiply_jy != 0) > (int32_T)
    INS_P.CompareToConstant1_const_e);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
  if (rtb_LogicalOperator2_g || (INS_DWork.DiscreteTimeIntegrator_PrevR_h1 != 0))
  {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ca =
      INS_P.DiscreteTimeIntegrator_IC_l;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_ca >=
      INS_P.DiscreteTimeIntegrator_UpperS_n) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ca =
      INS_P.DiscreteTimeIntegrator_UpperS_n;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_ca <=
        INS_P.DiscreteTimeIntegrator_LowerS_l) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_ca =
        INS_P.DiscreteTimeIntegrator_LowerS_l;
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* RelationalOperator: '<S29>/Compare' incorporates:
   *  Constant: '<S29>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_LogicalOperator5 = ((rtb_Multiply_jy != 0) > (int32_T)
    INS_P.CompareToConstant1_const_ei);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
  if (rtb_LogicalOperator5 || (INS_DWork.DiscreteTimeIntegrator_PrevR_as != 0))
  {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_e =
      INS_P.DiscreteTimeIntegrator_IC_j;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_e >=
      INS_P.DiscreteTimeIntegrator_UpperS_f) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_e =
      INS_P.DiscreteTimeIntegrator_UpperS_f;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_e <=
        INS_P.DiscreteTimeIntegrator_LowerS_f) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_e =
        INS_P.DiscreteTimeIntegrator_LowerS_f;
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* RelationalOperator: '<S34>/Compare' incorporates:
   *  Constant: '<S34>/Constant'
   *  Logic: '<S9>/Logical Operator'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_Compare_o = ((rtb_Multiply_o != 0) > (int32_T)
                   INS_P.CompareToConstant1_const_ec);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */
  if (rtb_Compare_o || (INS_DWork.DiscreteTimeIntegrator_PrevRe_o != 0)) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kg =
      INS_P.DiscreteTimeIntegrator_IC_ig;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_kg >=
      INS_P.DiscreteTimeIntegrator_UpperS_m) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kg =
      INS_P.DiscreteTimeIntegrator_UpperS_m;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_kg <=
        INS_P.DiscreteTimeIntegrator_LowerS_i) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_kg =
        INS_P.DiscreteTimeIntegrator_LowerS_i;
    }
  }

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* RelationalOperator: '<S44>/Compare' incorporates:
   *  Constant: '<S44>/Constant'
   *  Logic: '<S9>/Logical Operator5'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_LogicalOperator3 = ((rtb_Multiply_gs != 0) > (int32_T)
    INS_P.CompareToConstant1_const_em);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* DiscreteIntegrator: '<S16>/Discrete-Time Integrator' */
  if (rtb_LogicalOperator3 || (INS_DWork.DiscreteTimeIntegrator_PrevR_ar != 0))
  {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_a =
      INS_P.DiscreteTimeIntegrator_IC_e;
  }

  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_a >=
      INS_P.DiscreteTimeIntegrator_Upper_ml) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_a =
      INS_P.DiscreteTimeIntegrator_Upper_ml;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_a <=
        INS_P.DiscreteTimeIntegrator_LowerS_g) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_a =
        INS_P.DiscreteTimeIntegrator_LowerS_g;
    }
  }

  /* Sum: '<S8>/Sum4' incorporates:
   *  Constant: '<S18>/Constant'
   *  Constant: '<S23>/Constant'
   *  Constant: '<S28>/Constant'
   *  Constant: '<S33>/Constant'
   *  Constant: '<S38>/Constant'
   *  Constant: '<S43>/Constant'
   *  Constant: '<S48>/Constant'
   *  Delay: '<S11>/Delay'
   *  Delay: '<S12>/Delay'
   *  Delay: '<S13>/Delay'
   *  Delay: '<S14>/Delay'
   *  Delay: '<S15>/Delay'
   *  Delay: '<S16>/Delay'
   *  Delay: '<S17>/Delay'
   *  DiscreteIntegrator: '<S11>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S12>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S13>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S14>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S15>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S16>/Discrete-Time Integrator'
   *  DiscreteIntegrator: '<S17>/Discrete-Time Integrator'
   *  Gain: '<S8>/Gain1'
   *  Gain: '<S8>/Gain11'
   *  Gain: '<S8>/Gain12'
   *  Gain: '<S8>/Gain13'
   *  Gain: '<S8>/Gain2'
   *  Gain: '<S8>/Gain4'
   *  Gain: '<S8>/Gain5'
   *  Logic: '<S11>/Logical Operator'
   *  Logic: '<S12>/Logical Operator'
   *  Logic: '<S13>/Logical Operator'
   *  Logic: '<S14>/Logical Operator'
   *  Logic: '<S15>/Logical Operator'
   *  Logic: '<S16>/Logical Operator'
   *  Logic: '<S17>/Logical Operator'
   *  Product: '<S11>/Multiply'
   *  Product: '<S12>/Multiply'
   *  Product: '<S13>/Multiply'
   *  Product: '<S14>/Multiply'
   *  Product: '<S15>/Multiply'
   *  Product: '<S16>/Multiply'
   *  Product: '<S17>/Multiply'
   *  RelationalOperator: '<S18>/Compare'
   *  RelationalOperator: '<S23>/Compare'
   *  RelationalOperator: '<S28>/Compare'
   *  RelationalOperator: '<S33>/Compare'
   *  RelationalOperator: '<S38>/Compare'
   *  RelationalOperator: '<S43>/Compare'
   *  RelationalOperator: '<S48>/Compare'
   */
  rtb_Sum1 = ((((((((uint32_T)(INS_DWork.DiscreteTimeIntegrator_DSTAT_hi <
    INS_P.valid_check5_time_out ? (int32_T)INS_DWork.Delay_DSTATE_cx : 0) *
                    INS_P.Gain11_Gain) >> 13) + (((uint32_T)
    (INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 < INS_P.valid_check8_time_out ?
     (int32_T)INS_DWork.Delay_DSTATE_l0 : 0) * INS_P.Gain12_Gain) >> 12)) +
                 (((uint32_T)(INS_DWork.DiscreteTimeIntegrator_DSTAT_ca <
    INS_P.valid_check1_time_out ? (int32_T)INS_DWork.Delay_DSTATE_cn : 0) *
                   INS_P.Gain13_Gain) >> 11)) + (((uint32_T)
    (INS_DWork.DiscreteTimeIntegrator_DSTAT_bo < INS_P.valid_check2_time_out ?
     (int32_T)INS_DWork.Delay_DSTATE_bn : 0) * INS_P.Gain1_Gain_kq) >> 10)) +
               (((uint32_T)(INS_DWork.DiscreteTimeIntegrator_DSTATE_e <
    INS_P.valid_check3_time_out ? (int32_T)INS_DWork.Delay_DSTATE_pk : 0) *
                 INS_P.Gain2_Gain_o5) >> 9)) + (((uint32_T)
    (INS_DWork.DiscreteTimeIntegrator_DSTAT_kg < INS_P.valid_check4_time_out ?
     (int32_T)INS_DWork.Delay_DSTATE_db : 0) * INS_P.Gain4_Gain_a) >> 8)) +
    (((uint32_T)(INS_DWork.DiscreteTimeIntegrator_DSTATE_a <
                 INS_P.valid_check6_time_out ? (int32_T)
                 INS_DWork.Delay_DSTATE_ly : 0) * INS_P.Gain5_Gain_e) >> 7);

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* RelationalOperator: '<S22>/Compare' incorporates:
   *  Constant: '<S20>/Constant'
   *  Constant: '<S22>/Constant'
   *  Logic: '<S9>/Logical Operator2'
   *  RelationalOperator: '<S20>/Compare'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_Compare_jx = (((rtb_Multiply_jy != 0) > (int32_T)
                     INS_P.CompareToConstant2_const) > (int32_T)
                    INS_P.Constant_Value_mt);

  /* RelationalOperator: '<S27>/Compare' incorporates:
   *  Constant: '<S25>/Constant'
   *  Constant: '<S27>/Constant'
   *  Logic: '<S9>/Logical Operator3'
   *  RelationalOperator: '<S25>/Compare'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_Compare_cy = (((rtb_Multiply_cb != 0) > (int32_T)
                     INS_P.CompareToConstant2_const_c) > (int32_T)
                    INS_P.Constant_Value_m2);

  /* RelationalOperator: '<S32>/Compare' incorporates:
   *  Constant: '<S30>/Constant'
   *  Constant: '<S32>/Constant'
   *  Logic: '<S9>/Logical Operator1'
   *  RelationalOperator: '<S30>/Compare'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_Compare_jc = (((rtb_Multiply_jy != 0) > (int32_T)
                     INS_P.CompareToConstant2_const_n) > (int32_T)
                    INS_P.Constant_Value_o2);

  /* RelationalOperator: '<S37>/Compare' incorporates:
   *  Constant: '<S35>/Constant'
   *  Constant: '<S37>/Constant'
   *  Logic: '<S9>/Logical Operator'
   *  RelationalOperator: '<S35>/Compare'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_Compare_j = (((rtb_Multiply_o != 0) > (int32_T)
                    INS_P.CompareToConstant2_const_b) > (int32_T)
                   INS_P.Constant_Value_hk);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* RelationalOperator: '<S42>/Compare' incorporates:
   *  Constant: '<S40>/Constant'
   *  Constant: '<S42>/Constant'
   *  RelationalOperator: '<S40>/Compare'
   */
  rtb_Compare_bx = (((int32_T)rtb_FixPtRelationalOperator_nc > (int32_T)
                     INS_P.CompareToConstant2_const_i) > (int32_T)
                    INS_P.Constant_Value_l1);

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* RelationalOperator: '<S47>/Compare' incorporates:
   *  Constant: '<S45>/Constant'
   *  Constant: '<S47>/Constant'
   *  Logic: '<S9>/Logical Operator5'
   *  RelationalOperator: '<S45>/Compare'
   *  SignalConversion: '<S184>/Signal Copy'
   */
  rtb_LogicalOperator1_cc = (((rtb_Multiply_gs != 0) > (int32_T)
    INS_P.CompareToConstant2_const_l) > (int32_T)INS_P.Constant_Value_m2n);

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* RelationalOperator: '<S52>/Compare' incorporates:
   *  Constant: '<S50>/Constant'
   *  Constant: '<S52>/Constant'
   *  RelationalOperator: '<S50>/Compare'
   */
  rtb_Compare_en = (((int32_T)rtb_Compare_en > (int32_T)
                     INS_P.CompareToConstant2_const_i1) > (int32_T)
                    INS_P.Constant_Value_ao);

  /* Update for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S12>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_bo +=
    INS_P.DiscreteTimeIntegrator_gainval * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_bo >=
      INS_P.DiscreteTimeIntegrator_UpperSat) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_bo =
      INS_P.DiscreteTimeIntegrator_UpperSat;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_bo <=
        INS_P.DiscreteTimeIntegrator_LowerSat) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_bo =
        INS_P.DiscreteTimeIntegrator_LowerSat;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevR_nf = (int8_T)rtb_Compare_cio;

  /* End of Update for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' */

  /* Update for Delay: '<S12>/Delay' incorporates:
   *  Logic: '<S12>/Logical Operator1'
   *  RelationalOperator: '<S26>/FixPt Relational Operator'
   *  UnitDelay: '<S26>/Delay Input1'
   */
  INS_DWork.Delay_DSTATE_bn = (((int32_T)rtb_Compare_cy > (int32_T)
    INS_DWork.DelayInput1_DSTATE_mu) || INS_DWork.Delay_DSTATE_bn);

  /* Update for DiscreteIntegrator: '<S15>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S15>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_hi +=
    INS_P.DiscreteTimeIntegrator_gainva_i * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_hi >=
      INS_P.DiscreteTimeIntegrator_UpperS_g) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hi =
      INS_P.DiscreteTimeIntegrator_UpperS_g;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_hi <=
        INS_P.DiscreteTimeIntegrator_LowerS_j) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_hi =
        INS_P.DiscreteTimeIntegrator_LowerS_j;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevRe_m = (int8_T)rtb_WGS84_pos_valid;

  /* End of Update for DiscreteIntegrator: '<S15>/Discrete-Time Integrator' */

  /* Update for Delay: '<S15>/Delay' incorporates:
   *  Logic: '<S15>/Logical Operator1'
   *  RelationalOperator: '<S41>/FixPt Relational Operator'
   *  UnitDelay: '<S41>/Delay Input1'
   */
  INS_DWork.Delay_DSTATE_cx = (((int32_T)rtb_Compare_bx > (int32_T)
    INS_DWork.DelayInput1_DSTATE_ng) || INS_DWork.Delay_DSTATE_cx);

  /* Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S17>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 +=
    INS_P.DiscreteTimeIntegrator_gainva_m * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 >=
      INS_P.DiscreteTimeIntegrator_UpperS_d) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 =
      INS_P.DiscreteTimeIntegrator_UpperS_d;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 <=
        INS_P.DiscreteTimeIntegrator_LowerS_n) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 =
        INS_P.DiscreteTimeIntegrator_LowerS_n;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevR_dj = (int8_T)
    rtb_FixPtRelationalOperator_p;

  /* End of Update for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */

  /* Update for Delay: '<S17>/Delay' incorporates:
   *  Logic: '<S17>/Logical Operator1'
   *  RelationalOperator: '<S51>/FixPt Relational Operator'
   *  UnitDelay: '<S51>/Delay Input1'
   */
  INS_DWork.Delay_DSTATE_l0 = (((int32_T)rtb_Compare_en > (int32_T)
    INS_DWork.DelayInput1_DSTATE_fq) || INS_DWork.Delay_DSTATE_l0);

  /* Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S11>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_ca +=
    INS_P.DiscreteTimeIntegrator_gainva_k * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_ca >=
      INS_P.DiscreteTimeIntegrator_UpperS_n) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ca =
      INS_P.DiscreteTimeIntegrator_UpperS_n;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_ca <=
        INS_P.DiscreteTimeIntegrator_LowerS_l) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_ca =
        INS_P.DiscreteTimeIntegrator_LowerS_l;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevR_h1 = (int8_T)rtb_LogicalOperator2_g;

  /* End of Update for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */

  /* Update for Delay: '<S11>/Delay' incorporates:
   *  Logic: '<S11>/Logical Operator1'
   *  RelationalOperator: '<S21>/FixPt Relational Operator'
   *  UnitDelay: '<S21>/Delay Input1'
   */
  INS_DWork.Delay_DSTATE_cn = (((int32_T)rtb_Compare_jx > (int32_T)
    INS_DWork.DelayInput1_DSTATE_dx) || INS_DWork.Delay_DSTATE_cn);

  /* Update for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S13>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_e +=
    INS_P.DiscreteTimeIntegrator_gainva_p * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_e >=
      INS_P.DiscreteTimeIntegrator_UpperS_f) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_e =
      INS_P.DiscreteTimeIntegrator_UpperS_f;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_e <=
        INS_P.DiscreteTimeIntegrator_LowerS_f) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_e =
        INS_P.DiscreteTimeIntegrator_LowerS_f;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevR_as = (int8_T)rtb_LogicalOperator5;

  /* End of Update for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */

  /* Update for Delay: '<S13>/Delay' incorporates:
   *  Logic: '<S13>/Logical Operator1'
   *  RelationalOperator: '<S31>/FixPt Relational Operator'
   *  UnitDelay: '<S31>/Delay Input1'
   */
  INS_DWork.Delay_DSTATE_pk = (((int32_T)rtb_Compare_jc > (int32_T)
    INS_DWork.DelayInput1_DSTATE_dq) || INS_DWork.Delay_DSTATE_pk);

  /* Update for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S14>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTAT_kg +=
    INS_P.DiscreteTimeIntegrator_gainv_me * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTAT_kg >=
      INS_P.DiscreteTimeIntegrator_UpperS_m) {
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kg =
      INS_P.DiscreteTimeIntegrator_UpperS_m;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTAT_kg <=
        INS_P.DiscreteTimeIntegrator_LowerS_i) {
      INS_DWork.DiscreteTimeIntegrator_DSTAT_kg =
        INS_P.DiscreteTimeIntegrator_LowerS_i;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevRe_o = (int8_T)rtb_Compare_o;

  /* End of Update for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */

  /* Update for Delay: '<S14>/Delay' incorporates:
   *  Logic: '<S14>/Logical Operator1'
   *  RelationalOperator: '<S36>/FixPt Relational Operator'
   *  UnitDelay: '<S36>/Delay Input1'
   */
  INS_DWork.Delay_DSTATE_db = (((int32_T)rtb_Compare_j > (int32_T)
    INS_DWork.DelayInput1_DSTATE_f4) || INS_DWork.Delay_DSTATE_db);

  /* Update for DiscreteIntegrator: '<S16>/Discrete-Time Integrator' incorporates:
   *  Constant: '<S16>/Constant'
   */
  INS_DWork.DiscreteTimeIntegrator_DSTATE_a +=
    INS_P.DiscreteTimeIntegrator_gainv_my * (real32_T)INS_EXPORT.period;
  if (INS_DWork.DiscreteTimeIntegrator_DSTATE_a >=
      INS_P.DiscreteTimeIntegrator_Upper_ml) {
    INS_DWork.DiscreteTimeIntegrator_DSTATE_a =
      INS_P.DiscreteTimeIntegrator_Upper_ml;
  } else {
    if (INS_DWork.DiscreteTimeIntegrator_DSTATE_a <=
        INS_P.DiscreteTimeIntegrator_LowerS_g) {
      INS_DWork.DiscreteTimeIntegrator_DSTATE_a =
        INS_P.DiscreteTimeIntegrator_LowerS_g;
    }
  }

  INS_DWork.DiscreteTimeIntegrator_PrevR_ar = (int8_T)rtb_LogicalOperator3;

  /* End of Update for DiscreteIntegrator: '<S16>/Discrete-Time Integrator' */

  /* Update for Delay: '<S16>/Delay' incorporates:
   *  Logic: '<S16>/Logical Operator1'
   *  RelationalOperator: '<S46>/FixPt Relational Operator'
   *  UnitDelay: '<S46>/Delay Input1'
   */
  INS_DWork.Delay_DSTATE_ly = (((int32_T)rtb_LogicalOperator1_cc > (int32_T)
    INS_DWork.DelayInput1_DSTATE_dql) || INS_DWork.Delay_DSTATE_ly);

  /* Update for UnitDelay: '<S21>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_dx = rtb_Compare_jx;

  /* Update for UnitDelay: '<S26>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_mu = rtb_Compare_cy;

  /* Update for UnitDelay: '<S31>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_dq = rtb_Compare_jc;

  /* Update for UnitDelay: '<S36>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_f4 = rtb_Compare_j;

  /* Update for UnitDelay: '<S41>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_ng = rtb_Compare_bx;

  /* Update for UnitDelay: '<S46>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_dql = rtb_LogicalOperator1_cc;

  /* Update for UnitDelay: '<S51>/Delay Input1' */
  INS_DWork.DelayInput1_DSTATE_fq = rtb_Compare_en;

  /* End of Outputs for SubSystem: '<S1>/Status_Output' */

  /* Outputs for Atomic SubSystem: '<S1>/Rotation_Output' */
  /* Outport: '<Root>/INS_Out' incorporates:
   *  BusCreator: '<Root>/BusConversion_InsertedFor_INS_Out_at_inport_0'
   *  Inport: '<Root>/IMU'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport1'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport2'
   *  SignalConversion: '<S420>/TmpSignal ConversionAtBus Selector1Outport3'
   *  SignalConversion: '<S59>/BusConversion_InsertedFor_Rotation_Data_at_inport_0'
   *  SignalConversion: '<S5>/Signal Copy'
   *  SignalConversion: '<S7>/Signal Copy'
   */
  INS_Y.INS_Out.phi = rtb_Gain_gz_idx_0;
  INS_Y.INS_Out.theta = rtb_Gain_gz_idx_1;
  INS_Y.INS_Out.psi = rtb_Gain_gz_idx_2;

  /* End of Outputs for SubSystem: '<S1>/Rotation_Output' */
  /* End of Outputs for SubSystem: '<Root>/Bus_Constructor' */

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
  /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
  INS_Y.INS_Out.quat[0] = rtb_Sum_p_idx_0;
  INS_Y.INS_Out.quat[1] = rtb_Sum_p_idx_1;
  INS_Y.INS_Out.quat[2] = rtb_Switch_kj_idx_2;
  INS_Y.INS_Out.quat[3] = rtb_Switch_kj_idx_3;

  /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
  /* End of Outputs for SubSystem: '<S55>/AHRS' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/IMU_PreProcess' */
  INS_Y.INS_Out.p = INS_U.IMU.gyr_x;
  INS_Y.INS_Out.q = INS_U.IMU.gyr_y;
  INS_Y.INS_Out.r = INS_U.IMU.gyr_z;

  /* End of Outputs for SubSystem: '<S3>/IMU_PreProcess' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */
  INS_Y.INS_Out.ax = rtb_Multiply_hs[0];
  INS_Y.INS_Out.ay = rtb_Multiply_hs[1];
  INS_Y.INS_Out.az = rtb_Multiply_hs[2];

  /* Outputs for Atomic SubSystem: '<Root>/Bus_Constructor' */
  /* Outputs for Atomic SubSystem: '<S1>/Translation_Output' */
  INS_Y.INS_Out.vn = rtb_Sum_g0[2];
  INS_Y.INS_Out.ve = rtb_Sum_g0[3];
  INS_Y.INS_Out.vd = rtb_MathFunction[1];

  /* End of Outputs for SubSystem: '<S1>/Translation_Output' */
  /* End of Outputs for SubSystem: '<Root>/Bus_Constructor' */

  /* Outputs for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
  /* Outputs for Atomic SubSystem: '<S3>/AirSpeed_Process' */
  /* Signum: '<S373>/Sign' incorporates:
   *  Inport: '<Root>/AirSpeed'
   */
  if (INS_U.AirSpeed.diff_pressure < 0.0F) {
    rtb_Sum_p_idx_1 = -1.0F;
  } else if (INS_U.AirSpeed.diff_pressure > 0.0F) {
    rtb_Sum_p_idx_1 = 1.0F;
  } else {
    rtb_Sum_p_idx_1 = INS_U.AirSpeed.diff_pressure;
  }

  /* End of Signum: '<S373>/Sign' */

  /* Product: '<S373>/Multiply' incorporates:
   *  Abs: '<S373>/Abs'
   *  Constant: '<S373>/AirDensity_15C'
   *  Gain: '<S373>/Gain'
   *  Inport: '<Root>/AirSpeed'
   *  Product: '<S373>/Divide'
   *  Sqrt: '<S373>/Sqrt'
   */
  rtb_DiscreteTimeIntegrator_g = sqrtf(INS_P.Gain_Gain_ozb * fabsf
    (INS_U.AirSpeed.diff_pressure) / INS_P.AirDensity_15C_Value) *
    rtb_Sum_p_idx_1;

  /* Saturate: '<S365>/Saturation1' */
  if (rtb_DiscreteTimeIntegrator_g > INS_P.Saturation1_UpperSat_i) {
    /* Outport: '<Root>/INS_Out' */
    INS_Y.INS_Out.airspeed = INS_P.Saturation1_UpperSat_i;
  } else if (rtb_DiscreteTimeIntegrator_g < INS_P.Saturation1_LowerSat_n) {
    /* Outport: '<Root>/INS_Out' */
    INS_Y.INS_Out.airspeed = INS_P.Saturation1_LowerSat_n;
  } else {
    /* Outport: '<Root>/INS_Out' */
    INS_Y.INS_Out.airspeed = rtb_DiscreteTimeIntegrator_g;
  }

  /* End of Saturate: '<S365>/Saturation1' */
  /* End of Outputs for SubSystem: '<S3>/AirSpeed_Process' */
  /* End of Outputs for SubSystem: '<Root>/Sensor_PreProcess' */

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  /* Outport: '<Root>/INS_Out' incorporates:
   *  SignalConversion: '<S184>/TmpSignal ConversionAtSignal Copy1Inport1'
   *  SignalConversion: '<S184>/TmpSignal ConversionAtSignal Copy2Inport1'
   *  SignalConversion: '<S184>/TmpSignal ConversionAtSignal Copy3Inport1'
   *  SignalConversion: '<S184>/TmpSignal ConversionAtSignal Copy4Inport1'
   *  SignalConversion: '<S184>/TmpSignal ConversionAtSignal Copy5Inport1'
   *  SignalConversion: '<S7>/Signal Copy'
   *  Sum: '<S189>/Sum'
   */
  INS_Y.INS_Out.lat_0 = rtb_Switch4_c_idx_0;
  INS_Y.INS_Out.lon_0 = rtb_Switch4_c_idx_1;
  INS_Y.INS_Out.alt_0 = rtb_ff;
  INS_Y.INS_Out.dx_dlat = rtb_DataTypeConversion1;
  INS_Y.INS_Out.dy_dlon = rtb_DataTypeConversion2;

  /* End of Outputs for SubSystem: '<S56>/CF' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* Outputs for Atomic SubSystem: '<Root>/Bus_Constructor' */
  /* Outputs for Atomic SubSystem: '<S1>/Translation_Output' */
  INS_Y.INS_Out.x_R = rtb_Sum_g0[0];
  INS_Y.INS_Out.y_R = rtb_Sum_g0[1];
  INS_Y.INS_Out.h_R = rtb_MathFunction[0];

  /* End of Outputs for SubSystem: '<S1>/Translation_Output' */
  /* End of Outputs for SubSystem: '<Root>/Bus_Constructor' */

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S56>/CF' */
  INS_Y.INS_Out.h_AGL = rtb_MathFunction[0] - INS_B.rf_height_bias;

  /* End of Outputs for SubSystem: '<S56>/CF' */

  /* Outputs for Atomic SubSystem: '<Root>/Bus_Constructor' */
  /* Outputs for Atomic SubSystem: '<S1>/Status_Output' */
  /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
  /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
  /* Gain: '<S8>/Gain10' incorporates:
   *  SignalConversion: '<S59>/TmpSignal ConversionAtSignal Conversion1Inport1'
   */
  rtb_Sum_p_idx_1 = fmodf(floorf(INS_P.Gain10_Gain * rtb_Abs_h_idx_0),
    4.2949673E+9F);

  /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
  /* End of Outputs for SubSystem: '<S55>/AHRS' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */

  /* Outport: '<Root>/INS_Out' incorporates:
   *  Constant: '<S10>/Constant'
   *  Constant: '<S53>/Constant'
   *  Constant: '<S54>/Constant'
   *  Constant: '<S8>/Constant'
   *  DataTypeConversion: '<S10>/Data Type Conversion'
   *  Gain: '<S10>/Gain1'
   *  Gain: '<S10>/Gain2'
   *  Gain: '<S10>/Gain3'
   *  Gain: '<S10>/Gain4'
   *  Gain: '<S10>/Gain5'
   *  Gain: '<S10>/Gain6'
   *  Gain: '<S8>/Gain10'
   *  Gain: '<S8>/Gain9'
   *  MinMax: '<S10>/Max'
   *  RelationalOperator: '<S53>/Compare'
   *  RelationalOperator: '<S54>/Compare'
   *  Sum: '<S10>/Sum'
   *  Sum: '<S8>/Sum2'
   *  Sum: '<S8>/Sum3'
   */
  INS_Y.INS_Out.flag = ((rtb_Sum_p_idx_1 < 0.0F ? (uint32_T)-(int32_T)(uint32_T)
    -rtb_Sum_p_idx_1 : (uint32_T)rtb_Sum_p_idx_1) + mul_u32_loSR
                        (INS_P.Gain9_Gain, INS_P.Constant_Value_pt, 31U)) +
    rtb_Sum1;
  INS_Y.INS_Out.status = (((((rtb_FixPtRelationalOperator_nc + mul_u32_loSR
    (INS_P.Gain1_Gain_ap, INS_P.Constant_Value_lm, 30U)) + (rtb_MathFunction1 >
    INS_P.Constant_Value_h ? (uint32_T)INS_P.Gain2_Gain_h >> 5 : 0U)) +
    (rtb_FixPtRelationalOperator_cn ? (uint32_T)INS_P.Gain3_Gain_f >> 4 : 0U)) +
    (fmaxf(rtb_Product2, rtb_Product_d4) > INS_P.Constant_Value_j ? (uint32_T)
     INS_P.Gain4_Gain_p >> 3 : 0U)) + (rtb_Compare_c5 ? (uint32_T)
    INS_P.Gain5_Gain_a >> 2 : 0U)) + (rtb_Compare_ai ? (uint32_T)
    INS_P.Gain6_Gain >> 1 : 0U);

  /* End of Outputs for SubSystem: '<S1>/Status_Output' */
  /* End of Outputs for SubSystem: '<Root>/Bus_Constructor' */

  /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
  /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
  /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
  /* Update for Delay: '<Root>/Delay' incorporates:
   *  SignalConversion: '<S59>/BusConversion_InsertedFor_Rotation_Data_at_inport_0'
   *  SignalConversion: '<S59>/TmpSignal ConversionAtSignal Conversion4Inport1'
   */
  INS_DWork.Delay_1_DSTATE = rtb_Switch_ol;

  /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
  /* End of Outputs for SubSystem: '<S55>/AHRS' */
  /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */
  INS_DWork.Delay_2_DSTATE = rtb_Gain_gz_idx_0;
  INS_DWork.Delay_3_DSTATE = rtb_Gain_gz_idx_1;
  INS_DWork.Delay_4_DSTATE = rtb_Gain_gz_idx_2;
  for (rtb_Saturation1_j_idx_0 = 0; rtb_Saturation1_j_idx_0 < 9;
       rtb_Saturation1_j_idx_0++) {
    /* Outputs for Atomic SubSystem: '<Root>/Data_Fusion' */
    /* Outputs for Atomic SubSystem: '<S55>/AHRS' */
    /* Outputs for Atomic SubSystem: '<S57>/Bus_Constructor' */
    INS_DWork.Delay_8_DSTATE[rtb_Saturation1_j_idx_0] =
      rtb_VectorConcatenate_h[rtb_Saturation1_j_idx_0];

    /* End of Outputs for SubSystem: '<S57>/Bus_Constructor' */
    /* End of Outputs for SubSystem: '<S55>/AHRS' */
    /* End of Outputs for SubSystem: '<Root>/Data_Fusion' */
  }

  /* End of Update for Delay: '<Root>/Delay' */
}

/* Model initialize function */
void INS_init(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(INS_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &INS_B), 0,
                sizeof(BlockIO_INS_T));

  /* states (dwork) */
  (void) memset((void *)&INS_DWork, 0,
                sizeof(D_Work_INS_T));

  /* external inputs */
  (void)memset(&INS_U, 0, sizeof(ExternalInputs_INS_T));

  /* external outputs */
  INS_Y.INS_Out = INS_rtZINS_Out_Bus;

  {
    int32_T i;
    INS_PrevZCSigState.x_delay_Reset_ZCE_lr = POS_ZCSIG;
    INS_PrevZCSigState.x_delay1_Reset_ZCE_b = POS_ZCSIG;
    INS_PrevZCSigState.x_delay_Reset_ZCE_b = POS_ZCSIG;
    INS_PrevZCSigState.x_delay1_Reset_ZCE = POS_ZCSIG;
    INS_PrevZCSigState.vn_delay_Reset_ZCE_p = POS_ZCSIG;
    INS_PrevZCSigState.vn_delay1_Reset_ZCE = POS_ZCSIG;
    INS_PrevZCSigState.vn_delay_Reset_ZCE = POS_ZCSIG;
    INS_PrevZCSigState.ve_delay_Reset_ZCE = POS_ZCSIG;
    INS_PrevZCSigState.x_delay_Reset_ZCE_l = POS_ZCSIG;
    INS_PrevZCSigState.x_delay_Reset_ZCE = POS_ZCSIG;
    INS_PrevZCSigState.h_delay_Reset_ZCE_m = POS_ZCSIG;
    INS_PrevZCSigState.vd_delay_Reset_ZCE = POS_ZCSIG;
    INS_PrevZCSigState.h_delay_Reset_ZCE = POS_ZCSIG;
    INS_PrevZCSigState.WGS84_Model_Trig_ZCE = POS_ZCSIG;

    /* InitializeConditions for Delay: '<Root>/Delay' */
    INS_DWork.Delay_1_DSTATE = INS_P.Delay_1_InitialCondition;
    INS_DWork.Delay_2_DSTATE = INS_P.Delay_2_InitialCondition;
    INS_DWork.Delay_3_DSTATE = INS_P.Delay_3_InitialCondition;
    INS_DWork.Delay_4_DSTATE = INS_P.Delay_4_InitialCondition_m;

    /* SystemInitialize for Atomic SubSystem: '<Root>/Sensor_PreProcess' */
    /* SystemInitialize for Atomic SubSystem: '<S3>/Baro_PreProcess' */
    /* InitializeConditions for UnitDelay: '<S380>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_g = INS_P.DetectChange_vinit_d;

    /* InitializeConditions for UnitDelay: '<S383>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_c = INS_P.DetectChange_vinit_n;

    /* InitializeConditions for DiscreteIntegrator: '<S376>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nm =
      INS_P.DiscreteTimeIntegrator_IC_iu;

    /* InitializeConditions for Delay: '<S384>/Delay' */
    INS_DWork.Delay_DSTATE_i1 = INS_P.Delay_InitialCondition_j0;

    /* InitializeConditions for Delay: '<S378>/Delay' */
    INS_DWork.Delay_DSTATE_f = INS_P.Delay_InitialCondition_nt;

    /* SystemInitialize for Enabled SubSystem: '<S375>/Reference_Height' */
    /* InitializeConditions for Delay: '<S377>/Delay' */
    INS_DWork.Delay_DSTATE_d = INS_P.Delay_InitialCondition_p;

    /* InitializeConditions for Delay: '<S377>/Delay1' */
    INS_DWork.Delay1_DSTATE_i = INS_P.Delay1_InitialCondition_k;

    /* SystemInitialize for Outport: '<S377>/h_R_m' */
    INS_B.Divide = INS_P.h_R_m_Y0;

    /* End of SystemInitialize for SubSystem: '<S375>/Reference_Height' */
    /* End of SystemInitialize for SubSystem: '<S3>/Baro_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<S3>/ExternalPos_Process' */
    /* InitializeConditions for Delay: '<S390>/Delay' */
    INS_DWork.Delay_DSTATE_e = INS_P.Delay_InitialCondition_gj;

    /* InitializeConditions for Delay: '<S391>/Delay' */
    INS_DWork.Delay_DSTATE_a = INS_P.Delay_InitialCondition_gc;

    /* InitializeConditions for UnitDelay: '<S392>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_cn = INS_P.DetectIncrease_vinit_pa;

    /* InitializeConditions for UnitDelay: '<S397>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_b = INS_P.DetectChange_vinit_lj;

    /* InitializeConditions for DiscreteIntegrator: '<S389>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_nj =
      INS_P.DiscreteTimeIntegrator_IC_jj;

    /* InitializeConditions for Delay: '<S398>/Delay' */
    INS_DWork.Delay_DSTATE_g = INS_P.Delay_InitialCondition_h;

    /* InitializeConditions for Delay: '<S393>/Delay' */
    INS_DWork.Delay_DSTATE_gj = INS_P.Delay_InitialCondition_ng;

    /* End of SystemInitialize for SubSystem: '<S3>/ExternalPos_Process' */

    /* SystemInitialize for Atomic SubSystem: '<S3>/GPS_PreProcess' */
    /* InitializeConditions for UnitDelay: '<S412>/Unit Delay' */
    INS_DWork.UnitDelay_DSTATE = INS_P.UnitDelay_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S415>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_i = INS_P.DetectChange_vinit_e;

    /* InitializeConditions for DiscreteIntegrator: '<S406>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_i =
      INS_P.DiscreteTimeIntegrator_IC_p;

    /* InitializeConditions for DiscreteIntegrator: '<S416>/Discrete-Time Integrator1' */
    INS_DWork.DiscreteTimeIntegrator1_IC_LO_j = 1U;
    INS_DWork.DiscreteTimeIntegrator1_PrevR_l = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S417>/Discrete-Time Integrator1' */
    INS_DWork.DiscreteTimeIntegrator1_IC_LO_e = 1U;
    INS_DWork.DiscreteTimeIntegrator1_PrevR_j = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S416>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_k =
      INS_P.DiscreteTimeIntegrator_IC_d;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_a = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S417>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_l =
      INS_P.DiscreteTimeIntegrator_IC_f;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_j = 0;

    /* SystemInitialize for Triggered SubSystem: '<S368>/WGS84_Model' */
    /* SystemInitialize for Outport: '<S403>/lon_0_rad' */
    INS_B.DataTypeConversion = INS_P.lon_0_rad_Y0;

    /* SystemInitialize for Outport: '<S403>/lat_0_rad' */
    INS_B.DataTypeConversion1 = INS_P.lat_0_rad_Y0;

    /* SystemInitialize for Outport: '<S403>/dx_dlat' */
    INS_B.Rm = INS_P.dx_dlat_Y0;

    /* SystemInitialize for Outport: '<S403>/dy_dlon' */
    INS_B.Multiply2 = INS_P.dy_dlon_Y0;

    /* End of SystemInitialize for SubSystem: '<S368>/WGS84_Model' */
    /* End of SystemInitialize for SubSystem: '<S3>/GPS_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<S3>/IMU_PreProcess' */
    /* InitializeConditions for UnitDelay: '<S423>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_h = INS_P.DetectChange_vinit_md;

    /* InitializeConditions for DiscreteIntegrator: '<S421>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lp =
      INS_P.DiscreteTimeIntegrator_IC_ba;

    /* InitializeConditions for Delay: '<S424>/Delay' */
    INS_DWork.Delay_DSTATE_bw = INS_P.Delay_InitialCondition_ja;

    /* End of SystemInitialize for SubSystem: '<S3>/IMU_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<S3>/MAG_PreProcess' */
    /* InitializeConditions for DiscreteIntegrator: '<S436>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE = INS_P.DiscreteTimeIntegrator_IC_mb;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_k = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S436>/Discrete-Time Integrator1' */
    INS_DWork.DiscreteTimeIntegrator1_IC_LOAD = 1U;
    INS_DWork.DiscreteTimeIntegrator1_PrevRes = 0;

    /* InitializeConditions for UnitDelay: '<S443>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_n = INS_P.DetectChange_vinit_lp;

    /* InitializeConditions for DiscreteIntegrator: '<S429>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lg =
      INS_P.DiscreteTimeIntegrator_IC_k;

    /* InitializeConditions for Delay: '<S444>/Delay' */
    INS_DWork.Delay_DSTATE_fp = INS_P.Delay_InitialCondition_jy;

    /* End of SystemInitialize for SubSystem: '<S3>/MAG_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<S3>/Rangefinder_PreProcess' */
    /* InitializeConditions for UnitDelay: '<S458>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE = INS_P.DetectChange_vinit_c;

    /* InitializeConditions for DiscreteIntegrator: '<S454>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_e3 =
      INS_P.DiscreteTimeIntegrator_IC_f4;

    /* InitializeConditions for Delay: '<S459>/Delay' */
    INS_DWork.Delay_DSTATE_j = INS_P.Delay_InitialCondition_ny;

    /* InitializeConditions for DiscreteIntegrator: '<S455>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_cv =
      INS_P.DiscreteTimeIntegrator_IC_n1;
    INS_DWork.DiscreteTimeIntegrator_PrevRese = 2;

    /* End of SystemInitialize for SubSystem: '<S3>/Rangefinder_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<S3>/OpticalFlow_PreProcess' */
    /* InitializeConditions for DiscreteIntegrator: '<S448>/Discrete-Time Integrator5' */
    INS_DWork.DiscreteTimeIntegrator5_IC_LOAD = 1U;

    /* InitializeConditions for UnitDelay: '<S450>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_k = INS_P.DetectChange_vinit_ju;

    /* InitializeConditions for DiscreteIntegrator: '<S447>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_g =
      INS_P.DiscreteTimeIntegrator_IC_n;

    /* InitializeConditions for Delay: '<S451>/Delay' */
    INS_DWork.Delay_DSTATE_c = INS_P.Delay_InitialCondition_f;

    /* End of SystemInitialize for SubSystem: '<S3>/OpticalFlow_PreProcess' */
    /* End of SystemInitialize for SubSystem: '<Root>/Sensor_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/Data_Fusion' */
    /* InitializeConditions for Delay: '<S56>/Delay' */
    INS_DWork.Delay_4_DSTATE_k = INS_P.Delay_4_InitialCondition_h;
    INS_DWork.Delay_5_DSTATE = INS_P.Delay_5_InitialCondition;
    INS_DWork.Delay_6_DSTATE = INS_P.Delay_6_InitialCondition;

    /* SystemInitialize for Atomic SubSystem: '<S55>/RF_Data_PreProcess' */
    /* InitializeConditions for UnitDelay: '<S133>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_pr = INS_P.DetectRisePositive_vinit_fc;

    /* InitializeConditions for Delay: '<S138>/Delay' */
    INS_DWork.Delay_DSTATE_i = INS_P.Delay_InitialCondition_n;

    /* InitializeConditions for Delay: '<S135>/Delay' */
    INS_DWork.Delay_DSTATE_n = INS_P.Delay_InitialCondition_ij;

    /* InitializeConditions for UnitDelay: '<S140>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_mm = INS_P.DetectRisePositive1_vinit;

    /* InitializeConditions for DiscreteIntegrator: '<S181>/Discrete-Time Integrator5' */
    INS_DWork.DiscreteTimeIntegrator5_IC_LO_p = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S179>/Discrete-Time Integrator5' */
    INS_DWork.DiscreteTimeIntegrator5_IC_LO_n = 1U;

    /* InitializeConditions for DiscreteIntegrator: '<S180>/Discrete-Time Integrator5' */
    INS_DWork.DiscreteTimeIntegrator5_IC_L_ns = 1U;

    /* SystemInitialize for Enabled SubSystem: '<S58>/Initial_Attitude' */
    /* SystemInitialize for Merge: '<S145>/Merge' */
    INS_B.Merge_l[0] = INS_P.Merge_InitialOutput;

    /* SystemInitialize for Outport: '<S129>/quat_0' */
    INS_B.OutportBufferForquat_0[0] = INS_P.quat_0_Y0[0];

    /* SystemInitialize for Merge: '<S145>/Merge' */
    INS_B.Merge_l[1] = INS_P.Merge_InitialOutput;

    /* SystemInitialize for Outport: '<S129>/quat_0' */
    INS_B.OutportBufferForquat_0[1] = INS_P.quat_0_Y0[1];

    /* SystemInitialize for Merge: '<S145>/Merge' */
    INS_B.Merge_l[2] = INS_P.Merge_InitialOutput;

    /* SystemInitialize for Outport: '<S129>/quat_0' */
    INS_B.OutportBufferForquat_0[2] = INS_P.quat_0_Y0[2];

    /* SystemInitialize for Merge: '<S145>/Merge' */
    INS_B.Merge_l[3] = INS_P.Merge_InitialOutput;

    /* SystemInitialize for Outport: '<S129>/quat_0' */
    INS_B.OutportBufferForquat_0[3] = INS_P.quat_0_Y0[3];

    /* End of SystemInitialize for SubSystem: '<S58>/Initial_Attitude' */
    /* End of SystemInitialize for SubSystem: '<S55>/RF_Data_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<S55>/AHRS' */
    /* InitializeConditions for Delay: '<S57>/Delay' */
    INS_DWork.Delay_4_DSTATE_d = INS_P.Delay_4_InitialCondition;
    for (i = 0; i < 9; i++) {
      /* InitializeConditions for Delay: '<Root>/Delay' */
      INS_DWork.Delay_8_DSTATE[i] = INS_P.Delay_8_InitialCondition_m;

      /* InitializeConditions for Delay: '<S57>/Delay' */
      INS_DWork.Delay_7_DSTATE[i] = INS_P.Delay_7_InitialCondition;
      INS_DWork.Delay_8_DSTATE_l[i] = INS_P.Delay_8_InitialCondition;
    }

    /* InitializeConditions for Delay: '<S57>/Delay' */
    INS_DWork.Delay_10_DSTATE[0] = INS_P.Delay_10_InitialCondition;
    INS_DWork.Delay_10_DSTATE[1] = INS_P.Delay_10_InitialCondition;
    INS_DWork.Delay_10_DSTATE[2] = INS_P.Delay_10_InitialCondition;

    /* SystemInitialize for Atomic SubSystem: '<S57>/Correct' */
    /* InitializeConditions for DiscreteIntegrator: '<S89>/Discrete-Time Integrator1' */
    INS_DWork.DiscreteTimeIntegrator1_IC_LO_i = 1U;
    INS_DWork.DiscreteTimeIntegrator1_PrevR_p = 0;

    /* InitializeConditions for Delay: '<S87>/Delay' */
    for (i = 0; i < 600; i++) {
      INS_DWork.Delay_DSTATE_lv[i] = INS_P.Delay_InitialCondition_m;
    }

    /* End of InitializeConditions for Delay: '<S87>/Delay' */

    /* InitializeConditions for UnitDelay: '<S91>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_ff = INS_P.DetectIncrease_vinit;

    /* InitializeConditions for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_PrevRe_f = 0;

    /* InitializeConditions for Delay: '<S94>/Delay' */
    INS_DWork.Delay_DSTATE_b3 = INS_P.Delay_InitialCondition_d;

    /* InitializeConditions for UnitDelay: '<S97>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_ii = INS_P.DetectIncrease_vinit_i;

    /* InitializeConditions for DiscreteIntegrator: '<S105>/Discrete-Time Integrator1' */
    INS_DWork.DiscreteTimeIntegrator1_IC_LO_m = 1U;
    INS_DWork.DiscreteTimeIntegrator1_PrevR_m = 0;

    /* InitializeConditions for Delay: '<S101>/Delay' */
    INS_DWork.Delay_DSTATE_lt = INS_P.Delay_InitialCondition_i;

    /* InitializeConditions for UnitDelay: '<S108>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_d2s = INS_P.DetectIncrease_vinit_d;

    /* InitializeConditions for DiscreteIntegrator: '<S99>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_d =
      INS_P.DiscreteTimeIntegrator_IC_io;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_n = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_PrevRe_e = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S111>/Discrete-Time Integrator1' */
    INS_DWork.DiscreteTimeIntegrator1_IC_LO_l = 1U;
    INS_DWork.DiscreteTimeIntegrator1_PrevR_o = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S111>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_PrevR_nh = 0;

    /* SystemInitialize for Enabled SubSystem: '<S88>/GPS_Meas_Acc' */
    /* InitializeConditions for DiscreteIntegrator: '<S92>/Integrator' */
    INS_DWork.Integrator_PrevResetState = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S92>/Integrator1' */
    INS_DWork.Integrator1_IC_LOADING = 1U;
    INS_DWork.Integrator1_PrevResetState = 0;

    /* End of SystemInitialize for SubSystem: '<S88>/GPS_Meas_Acc' */
    /* End of SystemInitialize for SubSystem: '<S57>/Correct' */

    /* SystemInitialize for Atomic SubSystem: '<S57>/Update' */
    /* InitializeConditions for DiscreteIntegrator: '<S113>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_IC_LOADI = 1U;
    INS_DWork.DiscreteTimeIntegrator_PrevR_bk = 0;

    /* End of SystemInitialize for SubSystem: '<S57>/Update' */

    /* SystemInitialize for Atomic SubSystem: '<S57>/Correct' */
    /* InitializeConditions for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[0] =
      INS_P.DiscreteTimeIntegrator_IC_a;

    /* InitializeConditions for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[0] =
      INS_P.DiscreteTimeIntegrator_IC_el;

    /* InitializeConditions for DiscreteIntegrator: '<S111>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[0] =
      INS_P.DiscreteTimeIntegrator_IC_m;

    /* SystemInitialize for Enabled SubSystem: '<S88>/GPS_Meas_Acc' */
    /* InitializeConditions for DiscreteIntegrator: '<S92>/Integrator' */
    INS_DWork.Integrator_DSTATE[0] = INS_P.Integrator_IC;

    /* SystemInitialize for Outport: '<S92>/gps_acc_O_mPs2' */
    INS_B.Integrator[0] = INS_P.gps_acc_O_mPs2_Y0;

    /* End of SystemInitialize for SubSystem: '<S88>/GPS_Meas_Acc' */
    /* End of SystemInitialize for SubSystem: '<S57>/Correct' */

    /* SystemInitialize for Atomic SubSystem: '<S57>/Update' */
    /* InitializeConditions for DiscreteIntegrator: '<S114>/Discrete-Time Integrator2' */
    INS_DWork.DiscreteTimeIntegrator2_DSTATE[0] =
      INS_P.DiscreteTimeIntegrator2_IC;

    /* End of SystemInitialize for SubSystem: '<S57>/Update' */

    /* SystemInitialize for Atomic SubSystem: '<S57>/Correct' */
    /* InitializeConditions for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[1] =
      INS_P.DiscreteTimeIntegrator_IC_a;

    /* InitializeConditions for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[1] =
      INS_P.DiscreteTimeIntegrator_IC_el;

    /* InitializeConditions for DiscreteIntegrator: '<S111>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[1] =
      INS_P.DiscreteTimeIntegrator_IC_m;

    /* SystemInitialize for Enabled SubSystem: '<S88>/GPS_Meas_Acc' */
    /* InitializeConditions for DiscreteIntegrator: '<S92>/Integrator' */
    INS_DWork.Integrator_DSTATE[1] = INS_P.Integrator_IC;

    /* SystemInitialize for Outport: '<S92>/gps_acc_O_mPs2' */
    INS_B.Integrator[1] = INS_P.gps_acc_O_mPs2_Y0;

    /* End of SystemInitialize for SubSystem: '<S88>/GPS_Meas_Acc' */
    /* End of SystemInitialize for SubSystem: '<S57>/Correct' */

    /* SystemInitialize for Atomic SubSystem: '<S57>/Update' */
    /* InitializeConditions for DiscreteIntegrator: '<S114>/Discrete-Time Integrator2' */
    INS_DWork.DiscreteTimeIntegrator2_DSTATE[1] =
      INS_P.DiscreteTimeIntegrator2_IC;

    /* End of SystemInitialize for SubSystem: '<S57>/Update' */

    /* SystemInitialize for Atomic SubSystem: '<S57>/Correct' */
    /* InitializeConditions for DiscreteIntegrator: '<S89>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_lq[2] =
      INS_P.DiscreteTimeIntegrator_IC_a;

    /* InitializeConditions for DiscreteIntegrator: '<S105>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hs[2] =
      INS_P.DiscreteTimeIntegrator_IC_el;

    /* InitializeConditions for DiscreteIntegrator: '<S111>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ce[2] =
      INS_P.DiscreteTimeIntegrator_IC_m;

    /* SystemInitialize for Enabled SubSystem: '<S88>/GPS_Meas_Acc' */
    /* InitializeConditions for DiscreteIntegrator: '<S92>/Integrator' */
    INS_DWork.Integrator_DSTATE[2] = INS_P.Integrator_IC;

    /* SystemInitialize for Outport: '<S92>/gps_acc_O_mPs2' */
    INS_B.Integrator[2] = INS_P.gps_acc_O_mPs2_Y0;

    /* End of SystemInitialize for SubSystem: '<S88>/GPS_Meas_Acc' */
    /* End of SystemInitialize for SubSystem: '<S57>/Correct' */

    /* SystemInitialize for Atomic SubSystem: '<S57>/Update' */
    /* InitializeConditions for DiscreteIntegrator: '<S114>/Discrete-Time Integrator2' */
    INS_DWork.DiscreteTimeIntegrator2_DSTATE[2] =
      INS_P.DiscreteTimeIntegrator2_IC;

    /* End of SystemInitialize for SubSystem: '<S57>/Update' */
    /* End of SystemInitialize for SubSystem: '<S55>/AHRS' */

    /* SystemInitialize for Atomic SubSystem: '<S56>/TF_Data_PreProcess' */
    /* InitializeConditions for DiscreteIntegrator: '<S312>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_f =
      INS_P.DiscreteTimeIntegrator_IC_c;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_h = 0;

    /* InitializeConditions for DiscreteIntegrator: '<S312>/Discrete-Time Integrator1' */
    INS_DWork.DiscreteTimeIntegrator1_IC_LO_k = 1U;
    INS_DWork.DiscreteTimeIntegrator1_PrevR_d = 0;

    /* InitializeConditions for UnitDelay: '<S321>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_o = INS_P.DetectRisePositive_vinit_me;

    /* InitializeConditions for DiscreteIntegrator: '<S328>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_b =
      INS_P.DiscreteTimeIntegrator_IC_g;
    INS_DWork.DiscreteTimeIntegrator_PrevR_ky = 0;

    /* InitializeConditions for UnitDelay: '<S337>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_hg = INS_P.DetectRisePositive_vinit_o;

    /* InitializeConditions for Delay: '<S328>/Delay' */
    INS_DWork.Delay_DSTATE_kh = INS_P.Delay_InitialCondition_in;

    /* InitializeConditions for UnitDelay: '<S322>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_j = INS_P.DetectRisePositive1_vinit_h;

    /* InitializeConditions for DiscreteIntegrator: '<S340>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_c =
      INS_P.DiscreteTimeIntegrator_IC_lb;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_l = 0;

    /* InitializeConditions for UnitDelay: '<S350>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_p = INS_P.DetectRisePositive_vinit_h;

    /* InitializeConditions for Delay: '<S340>/Delay' */
    INS_DWork.Delay_DSTATE_k4 = INS_P.Delay_InitialCondition_ns;

    /* InitializeConditions for DiscreteIntegrator: '<S327>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_n =
      INS_P.DiscreteTimeIntegrator_IC_b;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_d = 0;

    /* InitializeConditions for Delay: '<S327>/Delay' */
    INS_DWork.Delay_DSTATE_ng = INS_P.Delay_InitialCondition_k;

    /* InitializeConditions for UnitDelay: '<S332>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_kh = INS_P.DetectRisePositive_vinit_d;

    /* InitializeConditions for DiscreteIntegrator: '<S339>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_h =
      INS_P.DiscreteTimeIntegrator_IC_h;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_b = 0;

    /* InitializeConditions for Delay: '<S339>/Delay' */
    INS_DWork.Delay_DSTATE_c1 = INS_P.Delay_InitialCondition_dh;

    /* InitializeConditions for UnitDelay: '<S345>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_ch = INS_P.DetectRisePositive_vinit_dn;

    /* InitializeConditions for DiscreteIntegrator: '<S341>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_k3 =
      INS_P.DiscreteTimeIntegrator_IC_ms;
    INS_DWork.DiscreteTimeIntegrator_PrevR_kt = 0;

    /* InitializeConditions for Delay: '<S341>/Delay' */
    INS_DWork.Delay_DSTATE_n2 = INS_P.Delay_InitialCondition_ia;

    /* InitializeConditions for UnitDelay: '<S355>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_jx = INS_P.DetectRisePositive_vinit_cj;

    /* InitializeConditions for Delay: '<S359>/Delay1' */
    INS_DWork.Delay1_DSTATE = INS_P.Delay1_InitialCondition;

    /* InitializeConditions for UnitDelay: '<S361>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_dp = INS_P.DetectRisePositive3_vinit;

    /* InitializeConditions for Delay: '<S360>/Delay' */
    INS_DWork.Delay_DSTATE[0] = INS_P.Delay_InitialCondition;

    /* InitializeConditions for Delay: '<S360>/Delay1' */
    INS_DWork.Delay1_DSTATE_o[0] = INS_P.Delay1_InitialCondition_e;

    /* InitializeConditions for Delay: '<S360>/Delay' */
    INS_DWork.Delay_DSTATE[1] = INS_P.Delay_InitialCondition;

    /* InitializeConditions for Delay: '<S360>/Delay1' */
    INS_DWork.Delay1_DSTATE_o[1] = INS_P.Delay1_InitialCondition_e;

    /* InitializeConditions for UnitDelay: '<S363>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_mw = INS_P.DetectRisePositive3_vinit_h;

    /* End of SystemInitialize for SubSystem: '<S56>/TF_Data_PreProcess' */

    /* SystemInitialize for Atomic SubSystem: '<S56>/CF' */
    /* InitializeConditions for Delay: '<S277>/Delay' */
    INS_DWork.Delay_DSTATE_b[0] = INS_P.Delay_InitialCondition_mt;
    INS_DWork.Delay_DSTATE_b[1] = INS_P.Delay_InitialCondition_mt;
    INS_DWork.Delay_DSTATE_b[2] = INS_P.Delay_InitialCondition_mt;

    /* SystemInitialize for Merge: '<S280>/Merge' */
    INS_B.Merge = INS_P.Merge_InitialOutput_g;

    /* SystemInitialize for Merge: '<S281>/Merge' */
    INS_B.Merge_e = INS_P.Merge_InitialOutput_d;

    /* SystemInitialize for Enabled SubSystem: '<S236>/Baro_Correct' */
    /* InitializeConditions for UnitDelay: '<S241>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_lg = INS_P.DetectChange_vinit_m;

    /* InitializeConditions for Delay: '<S242>/Delay' */
    INS_DWork.Delay_DSTATE_dr[0] = INS_P.Delay_InitialCondition_j;
    INS_DWork.Delay_DSTATE_dr[1] = INS_P.Delay_InitialCondition_j;
    INS_DWork.Delay_DSTATE_dr[2] = INS_P.Delay_InitialCondition_j;

    /* InitializeConditions for Delay: '<S244>/x_delay' */
    INS_DWork.icLoad_a = 1U;

    /* InitializeConditions for UnitDelay: '<S248>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_f = INS_P.DetectIncrease_vinit_c;

    /* InitializeConditions for Delay: '<S246>/Delay' */
    INS_DWork.Delay_DSTATE_h = INS_P.Delay_InitialCondition_mk;

    /* SystemInitialize for Outport: '<S240>/X_Next' */
    INS_B.Sum1_pu[0] = INS_P.X_Next_Y0_m;
    INS_B.Sum1_pu[1] = INS_P.X_Next_Y0_m;
    INS_B.Saturation = INS_P.X_Next_Y0_m;

    /* End of SystemInitialize for SubSystem: '<S236>/Baro_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S238>/GPS_Correct' */
    /* InitializeConditions for UnitDelay: '<S259>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_d = INS_P.DetectChange_vinit_h;

    /* InitializeConditions for Delay: '<S262>/h_delay' */
    INS_DWork.icLoad_o = 1U;

    /* InitializeConditions for Delay: '<S262>/vd_delay' */
    INS_DWork.icLoad_f = 1U;

    /* InitializeConditions for UnitDelay: '<S266>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_ib = INS_P.DetectIncrease_vinit_ji;

    /* InitializeConditions for Memory: '<S264>/Memory' */
    INS_DWork.Memory_PreviousInput_b = INS_P.Memory_InitialCondition_p;

    /* End of SystemInitialize for SubSystem: '<S238>/GPS_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S239>/Rangefinder_Correct' */
    /* InitializeConditions for UnitDelay: '<S268>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_l = INS_P.DetectChange_vinit_g;

    /* InitializeConditions for Delay: '<S271>/h_delay' */
    INS_DWork.icLoad = 1U;

    /* InitializeConditions for UnitDelay: '<S275>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_d2 = INS_P.DetectIncrease_vinit_g;

    /* InitializeConditions for Memory: '<S273>/Memory' */
    INS_DWork.Memory_PreviousInput = INS_P.Memory_InitialCondition_o5;

    /* SystemInitialize for Outport: '<S267>/rf_bias' */
    INS_B.rf_height_bias = INS_P.rf_bias_Y0;

    /* End of SystemInitialize for SubSystem: '<S239>/Rangefinder_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S237>/ExternalPos_Correct' */
    /* InitializeConditions for UnitDelay: '<S250>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_a = INS_P.DetectChange_vinit_j;

    /* InitializeConditions for Delay: '<S253>/x_delay' */
    INS_DWork.icLoad_p = 1U;

    /* InitializeConditions for UnitDelay: '<S257>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_a4 = INS_P.DetectIncrease_vinit_j;

    /* InitializeConditions for Delay: '<S255>/Delay' */
    INS_DWork.Delay_DSTATE_m = INS_P.Delay_InitialCondition_d2;

    /* End of SystemInitialize for SubSystem: '<S237>/ExternalPos_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S238>/GPS_Correct' */
    /* InitializeConditions for Memory: '<S260>/Memory' */
    INS_DWork.Memory_PreviousInput_e[0] = INS_P.Memory_InitialCondition_c;

    /* SystemInitialize for Outport: '<S258>/X_Next' */
    INS_B.Sum1_p[0] = INS_P.X_Next_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S238>/GPS_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S239>/Rangefinder_Correct' */
    /* InitializeConditions for Memory: '<S269>/Memory' */
    INS_DWork.Memory_PreviousInput_f[0] = INS_P.Memory_InitialCondition_h;

    /* SystemInitialize for Outport: '<S267>/X_Next' */
    INS_B.Sum1[0] = INS_P.X_Next_Y0_mm;

    /* End of SystemInitialize for SubSystem: '<S239>/Rangefinder_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S237>/ExternalPos_Correct' */
    /* InitializeConditions for Delay: '<S251>/Delay' */
    INS_DWork.Delay_DSTATE_p[0] = INS_P.Delay_InitialCondition_ms;

    /* SystemInitialize for Outport: '<S249>/X_Next' */
    INS_B.Sum1_c[0] = INS_P.X_Next_Y0_j;

    /* End of SystemInitialize for SubSystem: '<S237>/ExternalPos_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S238>/GPS_Correct' */
    /* InitializeConditions for Memory: '<S260>/Memory' */
    INS_DWork.Memory_PreviousInput_e[1] = INS_P.Memory_InitialCondition_c;

    /* SystemInitialize for Outport: '<S258>/X_Next' */
    INS_B.Sum1_p[1] = INS_P.X_Next_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S238>/GPS_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S239>/Rangefinder_Correct' */
    /* InitializeConditions for Memory: '<S269>/Memory' */
    INS_DWork.Memory_PreviousInput_f[1] = INS_P.Memory_InitialCondition_h;

    /* SystemInitialize for Outport: '<S267>/X_Next' */
    INS_B.Sum1[1] = INS_P.X_Next_Y0_mm;

    /* End of SystemInitialize for SubSystem: '<S239>/Rangefinder_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S237>/ExternalPos_Correct' */
    /* InitializeConditions for Delay: '<S251>/Delay' */
    INS_DWork.Delay_DSTATE_p[1] = INS_P.Delay_InitialCondition_ms;

    /* SystemInitialize for Outport: '<S249>/X_Next' */
    INS_B.Sum1_c[1] = INS_P.X_Next_Y0_j;

    /* End of SystemInitialize for SubSystem: '<S237>/ExternalPos_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S238>/GPS_Correct' */
    /* InitializeConditions for Memory: '<S260>/Memory' */
    INS_DWork.Memory_PreviousInput_e[2] = INS_P.Memory_InitialCondition_c;

    /* SystemInitialize for Outport: '<S258>/X_Next' */
    INS_B.Sum1_p[2] = INS_P.X_Next_Y0_i;

    /* End of SystemInitialize for SubSystem: '<S238>/GPS_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S239>/Rangefinder_Correct' */
    /* InitializeConditions for Memory: '<S269>/Memory' */
    INS_DWork.Memory_PreviousInput_f[2] = INS_P.Memory_InitialCondition_h;

    /* SystemInitialize for Outport: '<S267>/X_Next' */
    INS_B.Sum1[2] = INS_P.X_Next_Y0_mm;

    /* End of SystemInitialize for SubSystem: '<S239>/Rangefinder_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S237>/ExternalPos_Correct' */
    /* InitializeConditions for Delay: '<S251>/Delay' */
    INS_DWork.Delay_DSTATE_p[2] = INS_P.Delay_InitialCondition_ms;

    /* SystemInitialize for Outport: '<S249>/X_Next' */
    INS_B.Sum1_c[2] = INS_P.X_Next_Y0_j;

    /* End of SystemInitialize for SubSystem: '<S237>/ExternalPos_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S229>/GPS_Pos_Init' */
    /* SystemInitialize for Outport: '<S231>/X_0' */
    INS_B.DataTypeConversion_n[0] = INS_P.X_0_Y0;

    /* End of SystemInitialize for SubSystem: '<S229>/GPS_Pos_Init' */

    /* SystemInitialize for Merge: '<S230>/Merge' */
    INS_B.Merge_n[0] = INS_P.Merge_InitialOutput_c;

    /* SystemInitialize for Enabled SubSystem: '<S229>/GPS_Pos_Init' */
    /* SystemInitialize for Outport: '<S231>/X_0' */
    INS_B.DataTypeConversion_n[1] = INS_P.X_0_Y0;

    /* End of SystemInitialize for SubSystem: '<S229>/GPS_Pos_Init' */

    /* SystemInitialize for Merge: '<S230>/Merge' */
    INS_B.Merge_n[1] = INS_P.Merge_InitialOutput_c;

    /* SystemInitialize for Enabled SubSystem: '<S200>/OptFlow_Correct' */
    /* InitializeConditions for UnitDelay: '<S221>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_m = INS_P.DetectChange_vinit_l;

    /* InitializeConditions for Delay: '<S224>/vn_delay' */
    INS_DWork.icLoad_h = 1U;

    /* InitializeConditions for Delay: '<S224>/ve_delay' */
    INS_DWork.icLoad_j = 1U;

    /* End of SystemInitialize for SubSystem: '<S200>/OptFlow_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S199>/GPS_Correct' */
    /* InitializeConditions for UnitDelay: '<S211>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_d0 = INS_P.DetectChange_vinit_i;

    /* InitializeConditions for Delay: '<S214>/x_delay' */
    INS_DWork.icLoad_op = 1U;

    /* InitializeConditions for Delay: '<S214>/x_delay1' */
    INS_DWork.icLoad_i = 1U;

    /* InitializeConditions for Delay: '<S214>/vn_delay' */
    INS_DWork.icLoad_m = 1U;

    /* InitializeConditions for Delay: '<S214>/vn_delay1' */
    INS_DWork.icLoad_jp = 1U;

    /* InitializeConditions for UnitDelay: '<S219>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_gn = INS_P.DetectIncrease_vinit_p;

    /* InitializeConditions for Memory: '<S217>/Memory' */
    INS_DWork.Memory_PreviousInput_d[0] = INS_P.Memory_InitialCondition_l[0];
    INS_DWork.Memory_PreviousInput_d[1] = INS_P.Memory_InitialCondition_l[1];

    /* End of SystemInitialize for SubSystem: '<S199>/GPS_Correct' */

    /* SystemInitialize for Enabled SubSystem: '<S198>/ExternalPos_Correct' */
    /* InitializeConditions for UnitDelay: '<S202>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_no = INS_P.DetectChange_vinit;

    /* InitializeConditions for Delay: '<S205>/x_delay' */
    INS_DWork.icLoad_hw = 1U;

    /* InitializeConditions for Delay: '<S205>/x_delay1' */
    INS_DWork.icLoad_od = 1U;

    /* InitializeConditions for UnitDelay: '<S209>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_dp5 = INS_P.DetectIncrease_vinit_m;

    /* InitializeConditions for Delay: '<S207>/Delay' */
    INS_DWork.Delay_DSTATE_k[0] = INS_P.Delay_InitialCondition_e;
    INS_DWork.Delay_DSTATE_k[1] = INS_P.Delay_InitialCondition_e;

    /* SystemInitialize for Enabled SubSystem: '<S199>/GPS_Correct' */
    /* SystemInitialize for Enabled SubSystem: '<S200>/OptFlow_Correct' */
    for (i = 0; i < 6; i++) {
      /* InitializeConditions for Delay: '<S226>/Delay' */
      INS_DWork.Delay_DSTATE_l[i] = INS_P.Delay_InitialCondition_g;

      /* InitializeConditions for Memory: '<S222>/Memory' */
      INS_DWork.Memory_PreviousInput_n[i] = INS_P.Memory_InitialCondition_i;

      /* SystemInitialize for Outport: '<S220>/X_Next' */
      INS_B.Sum1_f[i] = INS_P.X_Next_Y0_k;

      /* InitializeConditions for Memory: '<S212>/Memory' */
      INS_DWork.Memory_PreviousInput_h[i] = INS_P.Memory_InitialCondition_o;

      /* SystemInitialize for Outport: '<S210>/X_Next' */
      INS_B.Sum1_o[i] = INS_P.X_Next_Y0_c;

      /* InitializeConditions for Memory: '<S203>/Memory' */
      INS_DWork.Memory_PreviousInput_m[i] = INS_P.Memory_InitialCondition;

      /* SystemInitialize for Outport: '<S201>/X_Next' */
      INS_B.Sum1_b[i] = INS_P.X_Next_Y0;
    }

    /* End of SystemInitialize for SubSystem: '<S200>/OptFlow_Correct' */
    /* End of SystemInitialize for SubSystem: '<S199>/GPS_Correct' */
    /* End of SystemInitialize for SubSystem: '<S198>/ExternalPos_Correct' */
    /* End of SystemInitialize for SubSystem: '<S56>/CF' */
    /* End of SystemInitialize for SubSystem: '<Root>/Data_Fusion' */

    /* SystemInitialize for Atomic SubSystem: '<Root>/Bus_Constructor' */
    /* SystemInitialize for Atomic SubSystem: '<S1>/Counter' */
    /* InitializeConditions for UnitDelay: '<S4>/Output' */
    INS_DWork.Output_DSTATE = INS_P.Output_InitialCondition;

    /* End of SystemInitialize for SubSystem: '<S1>/Counter' */

    /* SystemInitialize for Atomic SubSystem: '<S1>/Status_Output' */
    /* InitializeConditions for DiscreteIntegrator: '<S12>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_bo = INS_P.DiscreteTimeIntegrator_IC;
    INS_DWork.DiscreteTimeIntegrator_PrevR_nf = 0;

    /* InitializeConditions for Delay: '<S12>/Delay' */
    INS_DWork.Delay_DSTATE_bn = INS_P.Delay_InitialCondition_go;

    /* InitializeConditions for DiscreteIntegrator: '<S15>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_hi =
      INS_P.DiscreteTimeIntegrator_IC_i;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_m = 0;

    /* InitializeConditions for Delay: '<S15>/Delay' */
    INS_DWork.Delay_DSTATE_cx = INS_P.Delay_InitialCondition_mz;

    /* InitializeConditions for DiscreteIntegrator: '<S17>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_b3 =
      INS_P.DiscreteTimeIntegrator_IC_o;
    INS_DWork.DiscreteTimeIntegrator_PrevR_dj = 0;

    /* InitializeConditions for Delay: '<S17>/Delay' */
    INS_DWork.Delay_DSTATE_l0 = INS_P.Delay_InitialCondition_a;

    /* InitializeConditions for DiscreteIntegrator: '<S11>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_ca =
      INS_P.DiscreteTimeIntegrator_IC_l;
    INS_DWork.DiscreteTimeIntegrator_PrevR_h1 = 0;

    /* InitializeConditions for Delay: '<S11>/Delay' */
    INS_DWork.Delay_DSTATE_cn = INS_P.Delay_InitialCondition_c;

    /* InitializeConditions for DiscreteIntegrator: '<S13>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_e =
      INS_P.DiscreteTimeIntegrator_IC_j;
    INS_DWork.DiscreteTimeIntegrator_PrevR_as = 0;

    /* InitializeConditions for Delay: '<S13>/Delay' */
    INS_DWork.Delay_DSTATE_pk = INS_P.Delay_InitialCondition_cj;

    /* InitializeConditions for DiscreteIntegrator: '<S14>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTAT_kg =
      INS_P.DiscreteTimeIntegrator_IC_ig;
    INS_DWork.DiscreteTimeIntegrator_PrevRe_o = 0;

    /* InitializeConditions for Delay: '<S14>/Delay' */
    INS_DWork.Delay_DSTATE_db = INS_P.Delay_InitialCondition_ae;

    /* InitializeConditions for DiscreteIntegrator: '<S16>/Discrete-Time Integrator' */
    INS_DWork.DiscreteTimeIntegrator_DSTATE_a =
      INS_P.DiscreteTimeIntegrator_IC_e;
    INS_DWork.DiscreteTimeIntegrator_PrevR_ar = 0;

    /* InitializeConditions for Delay: '<S16>/Delay' */
    INS_DWork.Delay_DSTATE_ly = INS_P.Delay_InitialCondition_em;

    /* InitializeConditions for UnitDelay: '<S21>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_dx = INS_P.DetectRisePositive_vinit;

    /* InitializeConditions for UnitDelay: '<S26>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_mu = INS_P.DetectRisePositive_vinit_c;

    /* InitializeConditions for UnitDelay: '<S31>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_dq = INS_P.DetectRisePositive_vinit_m;

    /* InitializeConditions for UnitDelay: '<S36>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_f4 = INS_P.DetectRisePositive_vinit_k;

    /* InitializeConditions for UnitDelay: '<S41>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_ng = INS_P.DetectRisePositive_vinit_a;

    /* InitializeConditions for UnitDelay: '<S46>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_dql = INS_P.DetectRisePositive_vinit_f;

    /* InitializeConditions for UnitDelay: '<S51>/Delay Input1' */
    INS_DWork.DelayInput1_DSTATE_fq = INS_P.DetectRisePositive_vinit_l;

    /* End of SystemInitialize for SubSystem: '<S1>/Status_Output' */
    /* End of SystemInitialize for SubSystem: '<Root>/Bus_Constructor' */
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
